#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_RDN_ATTR.pszObjId", psz_obj_id, 0x0, 0x40, true, 0x1a6c45f7aa6f01a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_RDN_ATTR.dwValueType", dw_value_type, 0x40, 0x20, true, 0x942ab78ac0cf62fa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_RDN_ATTR.Value", value, 0x80, 0x80, true, 0x841298ca5218f540)
#else
#define _m00
#define _m01
#define _m02
#endif