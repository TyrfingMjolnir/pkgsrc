# $NetBSD: Makefile,v 1.9 2014/01/09 14:27:05 jperkin Exp $
#

PKGNAME=	ocaml-zip-${VERSION}
DISTNAME=	camlzip-${VERSION}
VERSION=	1.05
CATEGORIES=	archivers
MASTER_SITES=	http://forge.ocamlcore.org/frs/download.php/1037/
LICENSE=	gnu-lgpl-v2.1

MAINTAINER=	jaapb@kerguelen.org
HOMEPAGE=	http://forge.ocamlcore.org/projects/camlzip/
COMMENT=	OCaml library to manipulate ZIP/GZIP/JAR archives

BUILD_TARGET=	all
INSTALL_TARGET=	install-findlib
USE_TOOLS+=	gmake

PLIST_VARS+=	opt
.if (${MACHINE_ARCH} == "i386") || (${MACHINE_ARCH} == "powerpc") || \
    (${MACHINE_ARCH} == "sparc") || (${MACHINE_ARCH} == "x86_64") || \
    (${MACHINE_ARCH} == "arm")
BUILD_TARGET+=	allopt
PLIST.opt=	yes
.endif

.include "../../devel/zlib/buildlink3.mk"
.include "../../lang/ocaml/buildlink3.mk"
.include "../../devel/ocaml-findlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
