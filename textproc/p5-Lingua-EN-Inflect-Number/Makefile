# $NetBSD: Makefile,v 1.8 2014/05/29 23:37:36 wiz Exp $
#

DISTNAME=	Lingua-EN-Inflect-Number-1.1
PKGNAME=	p5-${DISTNAME}
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	6
CATEGORIES=	textproc perl5
MASTER_SITES=   ${MASTER_SITE_PERL_CPAN:=../../authors/id/S/SI/SIMON/}
#MASTER_SITES=	http://search.cpan.org/CPAN/authors/id/S/SI/SIMON/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/CPAN/authors/id/S/SI/SIMON/
COMMENT=	Force number of words to singular or plural

DEPENDS+=	p5-Lingua-EN-Inflect>=0:../../textproc/p5-Lingua-EN-Inflect

USE_LANGUAGES=	# empty
PERL5_PACKLIST=	auto/Lingua/EN/Inflect/Number/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
