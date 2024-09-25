#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_CONTENT_INFO.pszObjId", psz_obj_id, 0x0, 0x40, true, 0x741477b9d9b2d7ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_CONTENT_INFO.Content", content, 0x40, 0x80, true, 0x8aa761f296fe7faf)
#else
#define _m00
#define _m01
#endif