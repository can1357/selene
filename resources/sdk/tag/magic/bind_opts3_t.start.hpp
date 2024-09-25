#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS3.cbStruct", cb_struct, 0x0, 0x20, true, 0xa306b7ad9d8c29e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS3.grfFlags", grf_flags, 0x20, 0x20, true, 0xa603b7b5c3857007)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS3.grfMode", grf_mode, 0x40, 0x20, true, 0x1d1eceb3316136f0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS3.dwTickCountDeadline", dw_tick_count_deadline, 0x60, 0x20, true, 0xa8095a3942d56584)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS3.dwTrackFlags", dw_track_flags, 0x80, 0x20, true, 0x20d7a76ed3aa0f7f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS3.dwClassContext", dw_class_context, 0xa0, 0x20, true, 0x3a11d30dc8daef96)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS3.locale", locale, 0xc0, 0x20, true, 0xa4f4661494e5a7c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coserverinfo_t*), "tagBIND_OPTS3.pServerInfo", p_server_info, 0x100, 0x40, true, 0x78d0a6ec13530ce5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagBIND_OPTS3.hwnd", hwnd, 0x140, 0x40, true, 0x57856224fcc60b3c)
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
#endif