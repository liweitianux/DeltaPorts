--- shared_alloc_shm.c.orig	2020-10-13 21:58:13 UTC
+++ shared_alloc_shm.c
@@ -23,7 +23,7 @@
 
 #ifdef USE_SHM
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <machine/param.h>
 #endif
 #include <sys/types.h>
