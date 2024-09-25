#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_POLICY_ACCOUNT_DOMAIN_INFO.DomainName", domain_name, 0x0, 0x0, false, 0x1af9a3df7e857930)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POLICY_ACCOUNT_DOMAIN_INFO.DomainSid", domain_sid, 0x0, 0x0, false, 0x85ed310df70e439d)
#else
#define _m00
#define _m01
#endif