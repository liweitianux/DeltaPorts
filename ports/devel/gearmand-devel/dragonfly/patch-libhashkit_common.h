--- libhashkit/common.h.orig	2013-04-20 10:49:51 UTC
+++ libhashkit/common.h
@@ -46,6 +46,9 @@
 #include <math.h>
 
 #ifndef __WORDSIZE
+# ifdef __DragonFly__
+#  define __WORDSIZE 64
+# endif
 # ifdef __MINGW32__
 #  define __WORDSIZE 32
 # endif
