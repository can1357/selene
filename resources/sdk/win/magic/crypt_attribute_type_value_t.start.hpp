#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_ATTRIBUTE_TYPE_VALUE.pszObjId", psz_obj_id, 0x0, 0x40, true, 0xaaeb0964f0d9689c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_ATTRIBUTE_TYPE_VALUE.Value", value, 0x40, 0x80, true, 0x7fc62a76432d87b5)
#else
#define _m00
#define _m01
#endif