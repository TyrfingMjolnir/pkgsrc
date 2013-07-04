# $NetBSD: Makefile,v 1.30 2014/02/14 11:55:53 roy Exp $

DISTNAME=	fossil-src-20140127173344
PKGNAME=	fossil-1.28
CATEGORIES=	devel scm
MASTER_SITES=	http://www.fossil-scm.org/download/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.fossil-scm.org/
COMMENT=	High-reliability, distributed software configuration management
LICENSE=	2-clause-bsd

USE_MULTIARCH=	bin
HAS_CONFIGURE=	yes

INSTALLATION_DIRS+=	bin${BINARCHSUFFIX}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/fossil ${DESTDIR}${PREFIX}/bin${BINARCHSUFFIX}

.include "../../mk/readline.buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
