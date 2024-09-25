#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogMouseLatencyEvents@MousePerfSummary$win32kbase.sys", 0x0, 0x0, false, 0x7fbbc70886096e66)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SampleRandomPickEnd@MousePerfSummary$win32kbase.sys", 0x64410, 0x0, true, 0x6e7fda3b11adcd5c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CalculateLatencyInMicroseconds@MousePerfSummary$win32kbase.sys", 0x64348, 0x0, true, 0x349a2db9a7a12a64)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CollectMousePacketPerfTelemetry@MousePerfSummary$win32kbase.sys", 0x64240, 0x0, true, 0x32351988aec18c99)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CollectMousePerfTelemetry@MousePerfSummary$win32kbase.sys", 0x6412c, 0x0, true, 0x7014e2f42f3d1629)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MousePerfSummary@@QEAA@XZ$win32kbase.sys", 0x7984c, 0x0, true, 0xbf862313fa3fdecd)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Reset@MousePerfSummary$win32kbase.sys", 0x1ca0b4, 0x0, true, 0xf8140864168f492d)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SampleRandomPickStart@MousePerfSummary$win32kbase.sys", 0x64374, 0x0, true, 0x5d7079734522c262)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendMouseLatencyTelemetryRandomPick@MousePerfSummary$win32kbase.sys", 0x1ca1e8, 0x0, true, 0xf567e093e4504e86)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendMousePerfSummaryTelemetry@MousePerfSummary$win32kbase.sys", 0x1ca3d0, 0x0, true, 0xc6a415d08ac8f42d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#endif