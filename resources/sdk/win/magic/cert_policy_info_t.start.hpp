#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_POLICY_INFO.pszPolicyIdentifier", psz_policy_identifier, 0x0, 0x40, true, 0x705c3dc2cf6d07f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_POLICY_INFO.cPolicyQualifier", c_policy_qualifier, 0x40, 0x20, true, 0x214509935b1a78e3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_policy_qualifier_info_t*), "_CERT_POLICY_INFO.rgPolicyQualifier", rg_policy_qualifier, 0x80, 0x40, true, 0x35ef0647f9bb35ea)
#else
#define _m00
#define _m01
#define _m02
#endif