#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x10ca78b418e49f11)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_INFO.dwRevocationResult", dw_revocation_result, 0x20, 0x20, true, 0x6e43154cafb98f8d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_CERT_REVOCATION_INFO.pszRevocationOid", psz_revocation_oid, 0x40, 0x40, true, 0x7952ab9e376f5f86)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_REVOCATION_INFO.pvOidSpecificInfo", pv_oid_specific_info, 0x80, 0x40, true, 0x936ba8c47da1c9a5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_REVOCATION_INFO.fHasFreshnessTime", f_has_freshness_time, 0xc0, 0x20, true, 0xa6566ba0711c37bf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_INFO.dwFreshnessTime", dw_freshness_time, 0xe0, 0x20, true, 0xb03897cadd7b18b0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_revocation_crl_info_t*), "_CERT_REVOCATION_INFO.pCrlInfo", p_crl_info, 0x100, 0x40, true, 0x4dde6dc8434a568)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif