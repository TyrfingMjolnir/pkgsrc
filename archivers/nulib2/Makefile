# $NetBSD: Makefile,v 1.22 2014/09/13 11:10:58 shattered Exp $
#

DISTNAME=	nulibdist-220
PKGNAME=	nulib2-2.2.0
CATEGORIES=	archivers
MASTER_SITES=	http://www.nulib.com/downloads/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.nulib.com/
COMMENT=	Handles Apple II ShrinkIt (NuFX) file/disk archives
LICENSE=	modified-bsd

PKG_INSTALLATION_TYPES=	overwrite pkgviews

MAKE_JOBS_SAFE=		no

WRKSRC=			${WRKDIR}
CONFIGURE_DIRS=		${WRKDIR}/${DISTNAME:S/dist/2/}
GNU_CONFIGURE=		yes

.include "../../mk/bsd.prefs.mk"

CONFIGURE_ARGS+=--cache-file=${WRKDIR}/config.cache

CFLAGS+=	-D__unix__

.include "../../devel/zlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
