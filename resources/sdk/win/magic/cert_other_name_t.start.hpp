#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_OTHER_NAME.pszObjId", psz_obj_id, 0x0, 0x40, true, 0xa3f03390098035a8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_OTHER_NAME.Value", value, 0x40, 0x80, true, 0xdb22905595889f56)
#else
#define _m00
#define _m01
#endif