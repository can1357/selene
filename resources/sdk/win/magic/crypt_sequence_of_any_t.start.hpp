#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_SEQUENCE_OF_ANY.cValue", c_value, 0x0, 0x20, true, 0x18c351c0509ba5b3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_CRYPT_SEQUENCE_OF_ANY.rgValue", rg_value, 0x40, 0x40, true, 0x15702b2a74f28c0c)
#else
#define _m00
#define _m01
#endif