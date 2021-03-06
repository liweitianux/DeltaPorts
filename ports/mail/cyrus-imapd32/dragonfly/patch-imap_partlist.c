--- imap/partlist.c.orig	2020-10-04 23:31:24 UTC
+++ imap/partlist.c
@@ -47,7 +47,15 @@
 #include <string.h>
 #include <syslog.h>
 #include <sys/stat.h>
+#ifdef __DragonFly__
+/* XXX uuid_t name conflict <sys/uuid.h> vs "uuid/uuid.h" from libuuid from ports */
+#define uuid_t dfly_uuid_t
+#include <sys/uuid.h>
 #include <sys/statvfs.h>
+#undef uuid_t
+#else
+#include <sys/statvfs.h>
+#endif
 #include <sys/types.h>
 
 
