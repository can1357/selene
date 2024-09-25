#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_CONTENT_INFO_SEQUENCE_OF_ANY.pszObjId", psz_obj_id, 0x0, 0x40, true, 0x7fa285687f7c4a8d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_CONTENT_INFO_SEQUENCE_OF_ANY.cValue", c_value, 0x40, 0x20, true, 0x9b0aabec84277ad2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_CRYPT_CONTENT_INFO_SEQUENCE_OF_ANY.rgValue", rg_value, 0x80, 0x40, true, 0x4c5e6942b257e6f8)
#else
#define _m00
#define _m01
#define _m02
#endif