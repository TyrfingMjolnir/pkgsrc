# $NetBSD: Makefile,v 1.1 2014/09/07 12:27:31 wiz Exp $

DISTNAME=	Devel-CheckBin-0.02
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Devel/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Devel-CheckBin/
COMMENT=	Perl extension to check that a command is available
LICENSE=	${PERL5_LICENSE}

#DEPENDS+=	p5-IO-CaptureOutput>=1.08.01:../../devel/p5-IO-CaptureOutput

PERL5_PACKLIST=		auto/Devel/CheckBin/.packlist
PERL5_MODULE_TYPE=	Module::Build

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
