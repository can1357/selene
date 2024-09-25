#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagHIT_LOGGING_INFO.dwStructSize", dw_struct_size, 0x0, 0x20, true, 0x85065da5c33e77dc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_tagHIT_LOGGING_INFO.lpszLoggedUrlName", lpsz_logged_url_name, 0x40, 0x40, true, 0x204589ee0f9233d8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::systemtime_t), "_tagHIT_LOGGING_INFO.StartTime", start_time, 0x80, 0x80, true, 0xf2801018fe2185e5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::systemtime_t), "_tagHIT_LOGGING_INFO.EndTime", end_time, 0x100, 0x80, true, 0x3105df4f7f14ce80)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_tagHIT_LOGGING_INFO.lpszExtendedInfo", lpsz_extended_info, 0x180, 0x40, true, 0xda53a43e180c35c7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif