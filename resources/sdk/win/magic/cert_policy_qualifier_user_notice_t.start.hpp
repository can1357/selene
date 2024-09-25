#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcert_policy_qualifier_notice_reference_t ), "_CERT_POLICY_QUALIFIER_USER_NOTICE.pNoticeReference", p_notice_reference, 0x0, 0x40, true, 0xc0a8fa187790294d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_POLICY_QUALIFIER_USER_NOTICE.pszDisplayText", psz_display_text, 0x40, 0x40, true, 0xe979f95380794939)
#else
#define _m00
#define _m01
#endif