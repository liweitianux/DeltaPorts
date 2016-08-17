--- tools/openmp/runtime/src/kmp.h.orig	2016-07-11 13:44:57.000000000 +0300
+++ tools/openmp/runtime/src/kmp.h
@@ -1137,6 +1137,10 @@ extern int __kmp_place_num_threads_per_c
 /* TODO: tune for KMP_OS_NETBSD */
 #  define KMP_INIT_WAIT  1024U          /* initial number of spin-tests   */
 #  define KMP_NEXT_WAIT   512U          /* susequent number of spin-tests */
+#elif KMP_OS_DRAGONFLY
+/* TODO: tune for KMP_OS_DRAGONFLY */
+#  define KMP_INIT_WAIT  1024U          /* initial number of spin-tests   */
+#  define KMP_NEXT_WAIT   512U          /* susequent number of spin-tests */
 #endif
 
 #if KMP_ARCH_X86 || KMP_ARCH_X86_64
