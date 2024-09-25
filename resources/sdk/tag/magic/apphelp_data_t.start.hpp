#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagAPPHELP_DATA.dwFlags", dw_flags, 0x0, 0x20, true, 0x2ac7e96a78389daf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagAPPHELP_DATA.dwSeverity", dw_severity, 0x20, 0x20, true, 0x85aef323d3b17c42)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagAPPHELP_DATA.dwHTMLHelpID", dw_html_help_id, 0x40, 0x20, true, 0xa4bc3921e40935db)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagAPPHELP_DATA.szAppName", sz_app_name, 0x80, 0x40, true, 0x652b2e994195a5a5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagAPPHELP_DATA.trExe", tr_exe, 0xc0, 0x20, true, 0x107c9cba7900ec04)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagAPPHELP_DATA.szURL", sz_url, 0x100, 0x40, true, 0x2a859d9fe72cfdb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagAPPHELP_DATA.szLink", sz_link, 0x140, 0x40, true, 0x967d4b4cef93a1eb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagAPPHELP_DATA.szAppTitle", sz_app_title, 0x180, 0x40, true, 0x238efe8eaae4480c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagAPPHELP_DATA.szContact", sz_contact, 0x1c0, 0x40, true, 0x58c1e9d9a3a7fc87)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagAPPHELP_DATA.szDetails", sz_details, 0x200, 0x40, true, 0x8d92ab346dd87723)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagAPPHELP_DATA.dwData", dw_data, 0x240, 0x20, true, 0x84d4f39fffe383d4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagAPPHELP_DATA.bUnused", b_unused, 0x260, 0x20, true, 0xc48d0e1fd0515f66)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif