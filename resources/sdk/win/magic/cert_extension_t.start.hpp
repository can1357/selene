#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_EXTENSION.pszObjId", psz_obj_id, 0x0, 0x40, true, 0x743504c80254dc5a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_EXTENSION.fCritical", f_critical, 0x40, 0x20, true, 0x8194d149224bf624)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_EXTENSION.Value", value, 0x80, 0x80, true, 0x28a45eda32d7cad8)
#else
#define _m00
#define _m01
#define _m02
#endif