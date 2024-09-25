#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueueFrame@RIM@TelemetryDebug@InputTraceLogging$win32kbase.sys", 0x0, 0x0, false, 0xe24682c70c4d80f1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadComplete@RIM@TelemetryDebug@InputTraceLogging$win32kbase.sys", 0x0, 0x0, false, 0xdc9a47fed88d4078)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StartFrame@RIM@TelemetryDebug@InputTraceLogging$win32kbase.sys", 0x0, 0x0, false, 0x771a085e9f35f3da)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif