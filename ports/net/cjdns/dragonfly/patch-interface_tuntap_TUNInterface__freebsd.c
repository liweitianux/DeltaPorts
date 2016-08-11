--- interface/tuntap/TUNInterface_freebsd.c.orig	2016-06-15 00:58:54.000000000 +0300
+++ interface/tuntap/TUNInterface_freebsd.c
@@ -33,7 +33,11 @@
 #include <string.h>
 #include <netdb.h>
 #include <net/if_var.h>
+#ifdef __DragonFly__
+#include <net/tun/if_tun.h>
+#else
 #include <net/if_tun.h>
+#endif
 #include <netinet/in.h>
 #include <netinet6/in6_var.h>
 #include <netinet6/nd6.h>
