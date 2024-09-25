#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_POLICY_QUALIFIER_INFO.pszPolicyQualifierId", psz_policy_qualifier_id, 0x0, 0x40, true, 0x4a4920812926cfff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_POLICY_QUALIFIER_INFO.Qualifier", qualifier, 0x40, 0x80, true, 0x11a1df2ad8b536b9)
#else
#define _m00
#define _m01
#endif