#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeTargetPool@CFrameStats@CConnection@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0xae405e27d11c486e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetCurrentStats@CFrameStats@CConnection@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0xb767f16b10ccdd52)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TargetStatsCompleted@CFrameStats@CConnection@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x13cd30e6f6d43a8d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif