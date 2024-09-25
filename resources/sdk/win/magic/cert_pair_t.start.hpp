#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_PAIR.Forward", forward, 0x0, 0x80, true, 0xd6ddcb69e8dcca74)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_PAIR.Reverse", reverse, 0x80, 0x80, true, 0x7cbafce2fcb488fa)
#else
#define _m00
#define _m01
#endif