# $NetBSD: Makefile,v 1.52 2014/03/03 03:41:12 obache Exp $

PKGNAME=	createbuildlink-3.16
CATEGORIES=	pkgtools sysutils

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Shell script to help creating buildlink3.mk files
LICENSE=	original-bsd

PKG_INSTALLATION_TYPES=	overwrite pkgviews

WRKSRC=		${WRKDIR}
USE_LANGUAGES=	# empty
NO_BUILD=	yes

SCRIPT=		${PKGNAME:C/-.*$//}
SCRIPTS=	${SCRIPT} substplistbasedirs
REPLACE_SH+=	${SCRIPTS}

INSTALLATION_DIRS=	bin ${PKGMANDIR}/man8

do-extract:
.for scr in ${SCRIPTS}
	${SED}	-e 's|@PKGVERSION@|${PKGVERSION}|'		\
		-e 's|@MAKE@|${MAKE}|'				\
		< ${FILESDIR:Q}/${scr:Q} > ${WRKSRC:Q}/${scr:Q}
.endfor

do-install:
.for scr in ${SCRIPTS}
	${INSTALL_SCRIPT} ${WRKSRC:Q}/${scr:Q} ${DESTDIR}${PREFIX}/bin/${scr:Q}
.endfor
	${INSTALL_MAN} ${FILESDIR:Q}/${SCRIPT:Q}.8 ${DESTDIR}${PREFIX}/${PKGMANDIR:Q}/man8

.include "../../mk/bsd.pkg.mk"
