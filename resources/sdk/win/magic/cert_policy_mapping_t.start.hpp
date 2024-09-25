#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_POLICY_MAPPING.pszIssuerDomainPolicy", psz_issuer_domain_policy, 0x0, 0x40, true, 0xaacf5f9fcf631d6a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_POLICY_MAPPING.pszSubjectDomainPolicy", psz_subject_domain_policy, 0x40, 0x40, true, 0x1266707146a928b1)
#else
#define _m00
#define _m01
#endif