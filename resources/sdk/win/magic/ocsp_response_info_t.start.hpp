#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_RESPONSE_INFO.dwStatus", dw_status, 0x0, 0x20, true, 0xe4cb36c56f51dcce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_OCSP_RESPONSE_INFO.pszObjId", psz_obj_id, 0x40, 0x40, true, 0x7e729a82fe026bbe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_OCSP_RESPONSE_INFO.Value", value, 0x80, 0x80, true, 0x328a7908e7076ca4)
#else
#define _m00
#define _m01
#define _m02
#endif