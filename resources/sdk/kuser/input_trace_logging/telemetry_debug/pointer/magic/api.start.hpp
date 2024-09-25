#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging$win32kbase.sys", 0x0, 0x0, false, 0xaf9abcc53ef8d7f2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessInput@Pointer@TelemetryDebug@InputTraceLogging$win32kbase.sys", 0x0, 0x0, false, 0x8ade177fba09076c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RetrieveMessage@Pointer@TelemetryDebug@InputTraceLogging$win32kfull.sys", 0x0, 0x0, false, 0xd1c582720408ed19)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging$win32kbase.sys", 0x0, 0x0, false, 0x8ac14e5051e7d68f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif