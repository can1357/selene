#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPHELP_INFO.dwHtmlHelpID", dw_html_help_id, 0x0, 0x20, true, 0xde6bc718519ddaf8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPHELP_INFO.dwSeverity", dw_severity, 0x20, 0x20, true, 0x6f22fa8829b321ba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_APPHELP_INFO.lpszAppName", lpsz_app_name, 0x40, 0x40, true, 0xa0435cb304b90a85)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_APPHELP_INFO.guidID", guid_id, 0x80, 0x80, true, 0xff2efd0df69d7a13)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPHELP_INFO.tiExe", ti_exe, 0x100, 0x20, true, 0x6cc0b90973078dad)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_APPHELP_INFO.guidDB", guid_db, 0x120, 0x80, true, 0xd55e7917f895a3a5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_APPHELP_INFO.bOfflineContent", b_offline_content, 0x1a0, 0x20, true, 0x7ce94bb51eadd0ce)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_APPHELP_INFO.bUseHTMLHelp", b_use_html_help, 0x1c0, 0x20, true, 0x2ae26dfe212312a7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_APPHELP_INFO.lpszChmFile", lpsz_chm_file, 0x200, 0x40, true, 0xab4c85331ed2906)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_APPHELP_INFO.lpszDetailsFile", lpsz_details_file, 0x240, 0x40, true, 0xe665d95f21044aec)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_APPHELP_INFO.bPreserveChoice", b_preserve_choice, 0x280, 0x20, true, 0x8e28bc24fbfb0b8a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_APPHELP_INFO.bMSI", b_msi, 0x2a0, 0x20, true, 0xd5bc9532387b5365)
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