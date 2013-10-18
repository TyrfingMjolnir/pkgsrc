$NetBSD$

Stream DB updates rather than caching the whole thing in RAM.

--- summary.c.orig	2013-06-16 14:00:45.000000000 +0000
+++ summary.c
@@ -87,7 +87,7 @@ int				colnames(void *, int, char **, ch
 
 char		*env_repos, **pkg_repos;
 char		**commit_list = NULL;
-int			commit_idx = 0;
+int			commit_idx = -1;
 int			query_size = BUFSIZ;
 /* column count for table fields, given by colnames callback */
 int			colcount = 0;
@@ -398,6 +398,24 @@ update_col(struct Summary sum, int pkgid
 /* default version for (rare and buggy) packages with a version */
 #define NOVERSION "-0.0"
 
+void
+do_commit_list()
+{
+	int i;
+
+	commit_idx++;
+	XREALLOC(commit_list, (commit_idx + 1) * sizeof(char *));
+	commit_list[commit_idx] = NULL;
+
+	for (i = 0; commit_list[i] != NULL; i++) {
+		pkgindb_doquery(commit_list[i], NULL, NULL);
+	}
+
+	free_list(commit_list);
+	commit_list = NULL;
+	commit_idx = -1;
+}
+
 static void
 insert_summary(struct Summary sum, char **summary, char *cur_repo)
 {
@@ -416,11 +434,9 @@ insert_summary(struct Summary sum, char
 	/* record columns names to cols */
 	pkgindb_doquery(query, colnames, NULL);
 
-	SLIST_INIT(&inserthead);
-
-	XMALLOC(commit_list, sizeof(char *));
 	/* begin transaction */
-	XSTRDUP(commit_list[0], "BEGIN;");
+	snprintf(query, BUFSIZ, "BEGIN;");
+	pkgindb_doquery(query, NULL, NULL);
 
 	printf(MSG_UPDATING_DB);
 	fflush(stdout);
@@ -452,6 +468,8 @@ insert_summary(struct Summary sum, char
 				pkgname = tmpname;
 			}
 
+			SLIST_INIT(&inserthead);
+
 			add_to_slist("FULLPKGNAME", pkgname);
 
 			/* split PKGNAME and VERSION */
@@ -476,6 +494,9 @@ insert_summary(struct Summary sum, char
 		/* build INSERT query */
 		prepare_insert(pkgid, sum, cur_repo);
 
+		/* Perform the query */
+		do_commit_list();
+
 		/* next PKG_ID */
 		pkgid++;
 
@@ -487,20 +508,12 @@ insert_summary(struct Summary sum, char
 
 	} /* while *psum != NULL */
 
-	commit_idx++;
-	XREALLOC(commit_list, (commit_idx + 2) * sizeof(char *));
-	XSTRDUP(commit_list[commit_idx], "COMMIT;");
-	commit_list[commit_idx + 1] = NULL;
-
-	/* do the insert */
-	for (i = 0; commit_list[i] != NULL; i++)
-		pkgindb_doquery(commit_list[i], NULL, NULL);
+	/* finish the transaction */
+	snprintf(query, BUFSIZ, "COMMIT;");
+	pkgindb_doquery(query, NULL, NULL);
 
 	progress(alnum[strlen(alnum) - 1]); /* XXX: nasty. */
 
-	free_list(commit_list);
-	commit_idx = 0;
-
 	/* reset pkgid */
 	if (sum.type == LOCAL_SUMMARY)
 		pkgid = 1;
