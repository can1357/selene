#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_ALGORITHM_IDENTIFIER.pszObjId", psz_obj_id, 0x0, 0x40, true, 0x2f5e0ea099b663b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_ALGORITHM_IDENTIFIER.Parameters", parameters, 0x40, 0x80, true, 0x273b00f4b6254e7c)
#else
#define _m00
#define _m01
#endif