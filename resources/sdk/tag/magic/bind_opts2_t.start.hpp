#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS2.cbStruct", cb_struct, 0x0, 0x20, true, 0x50f57e31a3d8a843)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS2.grfFlags", grf_flags, 0x20, 0x20, true, 0x60fa91f51e2cdd49)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS2.grfMode", grf_mode, 0x40, 0x20, true, 0x20a0d086a660263c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS2.dwTickCountDeadline", dw_tick_count_deadline, 0x60, 0x20, true, 0xc205f663fe9091a6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS2.dwTrackFlags", dw_track_flags, 0x80, 0x20, true, 0x9c52d6a3a3513b89)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS2.dwClassContext", dw_class_context, 0xa0, 0x20, true, 0x9191e8158fa474fb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBIND_OPTS2.locale", locale, 0xc0, 0x20, true, 0x63f3d93af22754c6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coserverinfo_t*), "tagBIND_OPTS2.pServerInfo", p_server_info, 0x100, 0x40, true, 0x8d22748f009b6076)
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