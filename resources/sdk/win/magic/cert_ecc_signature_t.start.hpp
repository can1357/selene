#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_ECC_SIGNATURE.r", r, 0x0, 0x80, true, 0xd11d2962061a2e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_ECC_SIGNATURE.s", s, 0x80, 0x80, true, 0x432943408b91399)
#else
#define _m00
#define _m01
#endif