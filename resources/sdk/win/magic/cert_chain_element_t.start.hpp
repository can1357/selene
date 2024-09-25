#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_ELEMENT.cbSize", cb_size, 0x0, 0x20, true, 0xdd5a5082bb9b5def)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_context_t*), "_CERT_CHAIN_ELEMENT.pCertContext", p_cert_context, 0x40, 0x40, true, 0xf1759f775533fb97)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_trust_status_t), "_CERT_CHAIN_ELEMENT.TrustStatus", trust_status, 0x80, 0x40, true, 0x914d3ef816584951)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_revocation_info_t*), "_CERT_CHAIN_ELEMENT.pRevocationInfo", p_revocation_info, 0xc0, 0x40, true, 0xb0394784c9537689)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ctl_usage_t*), "_CERT_CHAIN_ELEMENT.pIssuanceUsage", p_issuance_usage, 0x100, 0x40, true, 0x95ea4e51637d89d6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ctl_usage_t*), "_CERT_CHAIN_ELEMENT.pApplicationUsage", p_application_usage, 0x140, 0x40, true, 0x33019728739c9e1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_CERT_CHAIN_ELEMENT.pwszExtendedErrorInfo", pwsz_extended_error_info, 0x180, 0x40, true, 0x87ea41b98d2aaa40)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif