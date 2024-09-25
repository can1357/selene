#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMONITORINFO.cbSize", cb_size, 0x0, 0x20, true, 0x7005a28e91a30117)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagMONITORINFO.rcMonitor", rc_monitor, 0x20, 0x80, true, 0x1cca21f971e1a599)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagMONITORINFO.rcWork", rc_work, 0xa0, 0x80, true, 0x11061813b4c256c1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMONITORINFO.dwFlags", dw_flags, 0x120, 0x20, true, 0x1f7f47e0a1e8601e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif