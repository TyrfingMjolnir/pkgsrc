# $NetBSD: Makefile,v 1.2 2014/08/07 02:31:07 rodent Exp $

DISTNAME=	WTForms-Components-0.9.5
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:tl}
CATEGORIES=	python www
MASTER_SITES=	https://pypi.python.org/packages/source/W/WTForms-Components/

MAINTAINER=	rodent@NetBSD.org
HOMEPAGE=	https://github.com/kvesteri/wtforms-components
COMMENT=	Additional fields, validators and widgets for WTForms
LICENSE=	modified-bsd

DEPENDS+=	${PYPKGPREFIX}-wtforms>=1.0.4:../../www/py-wtforms
DEPENDS+=	${PYPKGPREFIX}-sqlalchemy>=0.8.0:../../databases/py-sqlalchemy
DEPENDS+=	${PYPKGPREFIX}-sqlalchemy-utils>=0.23.1:../../databases/py-sqlalchemy-utils
DEPENDS+=	${PYPKGPREFIX}-six>=1.4.1:../../lang/py-six
DEPENDS+=	${PYPKGPREFIX}-validators>=0.5.0:../../textproc/py-validators
DEPENDS+=	${PYPKGPREFIX}-intervals>=0.2.0:../../math/py-intervals

USE_LANGUAGES=	# none

.include "options.mk"

EGG_NAME=	${DISTNAME:S/-/_/1}

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
