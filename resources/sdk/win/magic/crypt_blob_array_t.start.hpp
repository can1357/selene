#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_BLOB_ARRAY.cBlob", c_blob, 0x0, 0x20, true, 0x4256102325f18f1f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_CRYPT_BLOB_ARRAY.rgBlob", rg_blob, 0x40, 0x40, true, 0x9bc28c4726cc6448)
#else
#define _m00
#define _m01
#endif