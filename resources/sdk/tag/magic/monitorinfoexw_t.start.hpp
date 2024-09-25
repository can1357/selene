#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMONITORINFOEXW.cbSize", cb_size, 0x0, 0x20, true, 0x1b4b160811a6554f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagMONITORINFOEXW.rcMonitor", rc_monitor, 0x20, 0x80, true, 0xc34a7fb4560fc8ef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagMONITORINFOEXW.rcWork", rc_work, 0xa0, 0x80, true, 0x23e0690b789c359a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMONITORINFOEXW.dwFlags", dw_flags, 0x120, 0x20, true, 0x9783d235b97d2aec)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "tagMONITORINFOEXW.szDevice", sz_device, 0x140, 0x0, true, 0xca85e2749d88f48d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif