--- vendor/openssl-sys/build/main.rs.orig	2020-10-07 09:33:31 UTC
+++ vendor/openssl-sys/build/main.rs
@@ -220,7 +220,7 @@ See rust-openssl README for more informa
             (3, 0, _) => ('3', '0', 'x'),
             (3, 1, 0) => ('3', '1', '0'),
             (3, 1, _) => ('3', '1', 'x'),
-            (3, 2, 0) => ('3', '2', '0'),
+            (3, 2, _) => ('3', '2', 'x'),
             _ => version_error(),
         };
 
@@ -261,7 +261,7 @@ fn version_error() -> ! {
         "
 
 This crate is only compatible with OpenSSL 1.0.1 through 1.1.1, or LibreSSL 2.5
-through 3.2.0, but a different version of OpenSSL was found. The build is now aborting
+through 3.2.x, but a different version of OpenSSL was found. The build is now aborting
 due to this version mismatch.
 
 "
