#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_POLICY95_QUALIFIER1.pszPracticesReference", psz_practices_reference, 0x0, 0x40, true, 0x87d48ef256ca7f07)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_POLICY95_QUALIFIER1.pszNoticeIdentifier", psz_notice_identifier, 0x40, 0x40, true, 0xe8b356eb0d5ee356)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_POLICY95_QUALIFIER1.pszNSINoticeIdentifier", psz_nsi_notice_identifier, 0x80, 0x40, true, 0xb5c30e796eef920b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_POLICY95_QUALIFIER1.cCPSURLs", c_cpsur_ls, 0xc0, 0x20, true, 0x218de8709035dde6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cps_urls_t*), "_CERT_POLICY95_QUALIFIER1.rgCPSURLs", rg_cpsur_ls, 0x100, 0x40, true, 0xf0dd33cffaa580d2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif