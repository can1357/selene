#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRAWINPUTDEVICE.usUsagePage", us_usage_page, 0x0, 0x10, true, 0xdc3e1000303fb5c7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRAWINPUTDEVICE.usUsage", us_usage, 0x10, 0x10, true, 0x9582893a7e41ff21)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRAWINPUTDEVICE.dwFlags", dw_flags, 0x20, 0x20, true, 0x122cb60500a72b35)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagRAWINPUTDEVICE.hwndTarget", hwnd_target, 0x40, 0x40, true, 0x6c094b729472a7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif