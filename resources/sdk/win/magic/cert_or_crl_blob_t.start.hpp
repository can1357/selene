#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_OR_CRL_BLOB.dwChoice", dw_choice, 0x0, 0x20, true, 0xe7b6a07b78d429e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_OR_CRL_BLOB.cbEncoded", cb_encoded, 0x20, 0x20, true, 0xa927d575364e8788)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CERT_OR_CRL_BLOB.pbEncoded", pb_encoded, 0x40, 0x40, true, 0x2a23c8136fc0d680)
#else
#define _m00
#define _m01
#define _m02
#endif