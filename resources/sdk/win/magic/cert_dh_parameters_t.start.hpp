#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_DH_PARAMETERS.p", p, 0x0, 0x80, true, 0xf6c487829770b1f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_DH_PARAMETERS.g", g, 0x80, 0x80, true, 0x73ceb5c7e2d3e84a)
#else
#define _m00
#define _m01
#endif