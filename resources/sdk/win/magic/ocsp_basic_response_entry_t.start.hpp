#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ocsp_cert_id_t), "_OCSP_BASIC_RESPONSE_ENTRY.CertId", cert_id, 0x0, 0x40, true, 0xcfe33352b466f1ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_BASIC_RESPONSE_ENTRY.dwCertStatus", dw_cert_status, 0x240, 0x20, true, 0xf59f2b29deca63ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ocsp_basic_revoked_info_t*), "_OCSP_BASIC_RESPONSE_ENTRY.pRevokedInfo", p_revoked_info, 0x280, 0x40, true, 0x32616035b96864bd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_OCSP_BASIC_RESPONSE_ENTRY.ThisUpdate", this_update, 0x2c0, 0x40, true, 0x96c563a89107521c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_OCSP_BASIC_RESPONSE_ENTRY.NextUpdate", next_update, 0x300, 0x40, true, 0xd71cf7521e79ba4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_BASIC_RESPONSE_ENTRY.cExtension", c_extension, 0x340, 0x20, true, 0x948a463ecc302505)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_OCSP_BASIC_RESPONSE_ENTRY.rgExtension", rg_extension, 0x380, 0x40, true, 0xef8469428a7efc37)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif