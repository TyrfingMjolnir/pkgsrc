# $NetBSD: Makefile,v 1.53 2014/08/14 13:36:01 wen Exp $

DISTNAME=	URI-1.64
PKGNAME=	p5-${DISTNAME}
SVR4_PKGNAME=	p5uri
CATEGORIES=	www net perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=URI/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/URI/
COMMENT=	Perl5 Uniform Resource Identifiers class (URI, RFC 2396)
LICENSE=	${PERL5_LICENSE}

PKG_INSTALLATION_TYPES=	overwrite pkgviews

DEPENDS+=	{perl>=5.7,p5-MIME-Base64>=2.12}:../../converters/p5-MIME-Base64
# recommended
DEPENDS+=	p5-Business-ISBN-[0-9]*:../../misc/p5-Business-ISBN

CONFLICTS+=	p5-libwww-5.36{,nb*}	# URI used to be part of that package

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/URI/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
