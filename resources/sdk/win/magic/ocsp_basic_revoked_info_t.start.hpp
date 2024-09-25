#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_OCSP_BASIC_REVOKED_INFO.RevocationDate", revocation_date, 0x0, 0x40, true, 0xe073bf3059936c82)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_BASIC_REVOKED_INFO.dwCrlReasonCode", dw_crl_reason_code, 0x40, 0x20, true, 0x63368c3bdd7be4ee)
#else
#define _m00
#define _m01
#endif