#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SLEEPSTUDY_DATA_ENTRY.Key", key, 0x0, 0x0, false, 0x84694b6774f4de7f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SLEEPSTUDY_DATA_ENTRY.Value", value, 0x0, 0x0, false, 0xa7facbe1e6f25b10)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(psleepstudy_helper_value_formatter_t ), "_SLEEPSTUDY_DATA_ENTRY.Formatter", formatter, 0x0, 0x0, false, 0x7c008027787bd6b8)
#else
#define _m00
#define _m01
#define _m02
#endif