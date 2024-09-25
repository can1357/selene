#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RapidHpdComplete@DesktopRecalc@InputTraceLogging$win32kfull.sys", 0x0, 0x0, false, 0x74bc8ae8a6f840b1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RapidHpdModeChange@DesktopRecalc@InputTraceLogging$win32kfull.sys", 0x0, 0x0, false, 0x136b99c9488af69e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RestoreMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging$win32kfull.sys", 0x0, 0x0, false, 0x9936fc64ee147123)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SaveMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging$win32kfull.sys", 0x0, 0x0, false, 0xf74dca74a567a078)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif