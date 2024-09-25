#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_ALT_NAME_ENTRY.dwAltNameChoice", dw_alt_name_choice, 0x0, 0x20, true, 0xeec1db36fe1de0f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_other_name_t*), "_CERT_ALT_NAME_ENTRY.pOtherName", p_other_name, 0x40, 0x40, true, 0x5be2864eb269ec94)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_ALT_NAME_ENTRY.pwszRfc822Name", pwsz_rfc822_name, 0x40, 0x40, true, 0x2e28d3236f217f3d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_ALT_NAME_ENTRY.pwszDNSName", pwsz_dns_name, 0x40, 0x40, true, 0x7e4edce18eebadc3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_ALT_NAME_ENTRY.DirectoryName", directory_name, 0x40, 0x80, true, 0x75982c1c07aab23d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_ALT_NAME_ENTRY.pwszURL", pwsz_url, 0x40, 0x40, true, 0xc7b61a763a2dd610)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_ALT_NAME_ENTRY.IPAddress", ip_address, 0x40, 0x80, true, 0xb64753984998dcab)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_ALT_NAME_ENTRY.pszRegisteredID", psz_registered_id, 0x40, 0x40, true, 0x3f843bb2fb5e7b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif