# $NetBSD: Makefile,v 1.1 2014/07/28 00:22:43 wen Exp $
#

DISTNAME=	DBIx-Introspector-0.001003
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	databases perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=DBIx/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/DBIx-Introspector/
COMMENT=	Detect what database you are connected to
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-DBI>=1.628:../../databases/p5-DBI
DEPENDS+=	p5-Moo>=1.003001:../../devel/p5-Moo

BUILD_DEPENDS+=	p5-DBD-SQLite>=1.4:../../databases/p5-DBD-SQLite
BUILD_DEPENDS+=	p5-Test-Roo>=1.002:../../devel/p5-Test-Roo

PERL5_PACKLIST=		auto/DBIx/Introspector/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
