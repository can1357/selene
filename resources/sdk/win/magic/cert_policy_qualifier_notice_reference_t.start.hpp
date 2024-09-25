#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_POLICY_QUALIFIER_NOTICE_REFERENCE.pszOrganization", psz_organization, 0x0, 0x40, true, 0x54dbbadfd2959423)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_POLICY_QUALIFIER_NOTICE_REFERENCE.cNoticeNumbers", c_notice_numbers, 0x40, 0x20, true, 0xaeb6cdac21407741)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "_CERT_POLICY_QUALIFIER_NOTICE_REFERENCE.rgNoticeNumbers", rg_notice_numbers, 0x80, 0x40, true, 0xb0b840a8450e4358)
#else
#define _m00
#define _m01
#define _m02
#endif