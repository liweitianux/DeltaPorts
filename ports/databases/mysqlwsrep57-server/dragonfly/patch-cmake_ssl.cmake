LibreSSL SSL_OP_NO_TLSv1_3 workaround.

--- cmake/ssl.cmake.intermediate	2020-08-16 09:07:00.000000000 +0000
+++ cmake/ssl.cmake
@@ -193,7 +193,7 @@ MACRO (MYSQL_CHECK_SSL)
       )
     SET(OPENSSL_VERSION ${OPENSSL_VERSION} CACHE INTERNAL "")
 
-    IF("${OPENSSL_VERSION}" VERSION_GREATER "1.1.0")
+    IF("${OPENSSL_VERSION}" VERSION_GREATER "1.1.0" AND NOT ${OPENSSL_MAJOR_VERSION} EQUAL "2")
        ADD_DEFINITIONS(-DHAVE_TLSv13)
        SET(HAVE_TLSv13 1)
        IF(SOLARIS)