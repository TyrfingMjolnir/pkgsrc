# $NetBSD: Makefile,v 1.18 2014/05/29 23:36:59 wiz Exp $
#

DISTNAME=		Locale-Maketext-Fuzzy-0.11
PKGNAME=		p5-${DISTNAME}
PKGREVISION=		1
CATEGORIES=		misc perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Locale/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/Locale-Maketext-Fuzzy/
COMMENT=		Maketext from already interpolated strings
LICENSE=		cc0-1.0-universal

DEPENDS+=		{perl>=5.8.0,p5-Locale-Maketext-[0-9]*}:../../misc/p5-Locale-Maketext

PKG_INSTALLATION_TYPES=	overwrite pkgviews

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/Locale/Maketext/Fuzzy/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
