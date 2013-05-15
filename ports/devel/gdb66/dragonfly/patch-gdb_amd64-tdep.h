--- gdb/amd64-tdep.h.orig	2006-08-19 15:15:18.000000000 +0000
+++ gdb/amd64-tdep.h
@@ -93,9 +93,9 @@ extern int amd64nbsd_r_reg_offset[];
 /* Variables exported from amd64obsd-tdep.c.  */
 extern int amd64obsd_r_reg_offset[];
 
-/* Variables exported from amd64fbsd-tdep.c.  */
-extern CORE_ADDR amd64fbsd_sigtramp_start_addr;
-extern CORE_ADDR amd64fbsd_sigtramp_end_addr;
-extern int amd64fbsd_sc_reg_offset[];
+/* Variables exported from amd64dfly-tdep.c.  */
+extern CORE_ADDR amd64dfly_sigtramp_start_addr;
+extern CORE_ADDR amd64dfly_sigtramp_end_addr;
+extern int amd64dfly_sc_reg_offset[];
 
 #endif /* amd64-tdep.h */
