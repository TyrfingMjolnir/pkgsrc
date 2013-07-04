# $NetBSD$

DISTNAME=	isaexec-1.1
CATEGORIES=	pkgtools
MASTER_SITES=	# empty
DISTFILES=	# empty

MAINTAINER=	jperkin@joyent.com
HOMEPAGE=	http://src.illumos.org/source/xref/illumos-gate/usr/src/cmd/isaexec/
COMMENT=	isaexec(3C) wrapper for Solaris systems
LICENSE=	cddl-1.0

PKG_DESTDIR_SUPPORT=	user-destdir

CHECK_PERMS=	no

ONLY_FOR_PLATFORM=	SunOS-*-*

INSTALLATION_DIRS=	lib

.include "../../mk/compiler.mk"

.if !empty(PKGSRC_COMPILER:Msunpro)
CFLAGS+=	-xstrconst
.endif

do-extract:
	@${CP} -R ${FILESDIR} ${WRKSRC}

do-build:
	@(cd ${WRKSRC}; \
	  ${ECHO} "${CC} ${CFLAGS} isaexec.c -o isaexec"; \
	  ${CC} ${CFLAGS} isaexec.c -o isaexec)

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/isaexec ${DESTDIR}/${PREFIX}/lib/isaexec

.include "../../mk/bsd.pkg.mk"
