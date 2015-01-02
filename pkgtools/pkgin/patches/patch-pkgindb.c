$NetBSD$

Turn off confirmation prompt to install new database, we always want it.

--- pkgindb.c.orig	2013-06-16 14:00:45.000000000 +0000
+++ pkgindb.c
@@ -158,10 +158,12 @@ upgrade_database()
 {
 	if (pkgindb_doquery(COMPAT_CHECK,
 			pkgindb_simple_callback, NULL) == PDB_ERR) {
+#if 0
 		/* COMPAT_CHECK query leads to an error for an incompatible database */
 		printf(MSG_DATABASE_NOT_COMPAT);
 		if (!check_yesno(DEFAULT_YES))
 			exit(EXIT_FAILURE);
+#endif
 
 		pkgindb_reset();
 
