#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_SMIME_CAPABILITY.pszObjId", psz_obj_id, 0x0, 0x40, true, 0x7cff1a7c89155ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_SMIME_CAPABILITY.Parameters", parameters, 0x40, 0x80, true, 0xbaf2498cb0957415)
#else
#define _m00
#define _m01
#endif