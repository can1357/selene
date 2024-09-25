#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_DSS_PARAMETERS.p", p, 0x0, 0x80, true, 0x8bc336d2847b1a6a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_DSS_PARAMETERS.q", q, 0x80, 0x80, true, 0xe49b9a69e3b0cba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_DSS_PARAMETERS.g", g, 0x100, 0x80, true, 0xe4a970ee122ba973)
#else
#define _m00
#define _m01
#define _m02
#endif