# $NetBSD: Makefile,v 1.1 2014/05/22 12:50:48 fhajny Exp $

PKGNAME=		${DISTNAME:S/sqlrelay/sqlrelay-freetds/}
COMMENT=		FreeTDS support for SQL Relay

.include "../../databases/sqlrelay/Makefile.common"

CONFIGURE_ARGS+=	--with-freetds-prefix=${BUILDLINK_PREFIX.freetds}

BUILD_DIRS=		src/connections/freetds

.include "../../databases/freetds/buildlink3.mk"
.include "../../databases/sqlrelay/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
