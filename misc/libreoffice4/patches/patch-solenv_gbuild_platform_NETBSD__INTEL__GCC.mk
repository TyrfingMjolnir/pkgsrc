$NetBSD: patch-solenv_gbuild_platform_NETBSD__INTEL__GCC.mk,v 1.2 2014/04/06 04:07:05 ryoon Exp $

https://bugs.freedesktop.org/show_bug.cgi?id=77098

--- solenv/gbuild/platform/NETBSD_INTEL_GCC.mk.orig	2014-01-27 21:35:34.000000000 +0000
+++ solenv/gbuild/platform/NETBSD_INTEL_GCC.mk
@@ -16,7 +16,6 @@ include $(GBUILDDIR)/platform/unxgcc.mk
 
 NB_ADD_LIBPATH := /usr/pkg/lib:/usr/X11R7/lib
 
-gb_Helper_set_ld_path := LD_LIBRARY_PATH=$${LD_LIBRARY_PATH:+$$LD_LIBRARY_PATH:}$(NB_ADD_LIBPATH)
 gb_CppunitTest_CPPTESTPRECOMMAND := LD_LIBRARY_PATH=$${LD_LIBRARY_PATH:+$$LD_LIBRARY_PATH:}$(WORKDIR)/UnpackedTarball/cppunit/src/cppunit/.libs:$(NB_ADD_LIBPATH)
 
 # vim: set noet sw=4:
