#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_OTHER_LOGOTYPE_INFO.pszObjId", psz_obj_id, 0x0, 0x40, true, 0xc44567c2b21cbaac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_logotype_info_t), "_CERT_OTHER_LOGOTYPE_INFO.LogotypeInfo", logotype_info, 0x40, 0x80, true, 0xf75ea7947b3c548a)
#else
#define _m00
#define _m01
#endif