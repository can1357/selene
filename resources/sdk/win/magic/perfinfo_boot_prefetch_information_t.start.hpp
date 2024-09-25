#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_BOOT_PREFETCH_INFORMATION.Action", action, 0x0, 0x20, true, 0x27dd864849196ea2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_BOOT_PREFETCH_INFORMATION.Status", status, 0x20, 0x20, true, 0xc0aadf261958ca9e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_BOOT_PREFETCH_INFORMATION.Pages", pages, 0x40, 0x20, true, 0x1517d643a99f696f)
#else
#define _m00
#define _m01
#define _m02
#endif