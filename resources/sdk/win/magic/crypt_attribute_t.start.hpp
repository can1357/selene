#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_ATTRIBUTE.pszObjId", psz_obj_id, 0x0, 0x40, true, 0xf92991e309ab5894)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_ATTRIBUTE.cValue", c_value, 0x40, 0x20, true, 0xc60b1acf4dd95e34)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_CRYPT_ATTRIBUTE.rgValue", rg_value, 0x80, 0x40, true, 0x66304358886c57e2)
#else
#define _m00
#define _m01
#define _m02
#endif