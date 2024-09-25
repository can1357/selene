#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Register@TraceLoggingProvider@wil$dxgi.dll", 0x46538, 0x0, true, 0x1e309ff58e382235)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@TraceLoggingProvider@wil$dxgi.dll", 0x1fa70, 0x0, true, 0xf1b0000b8f3232c2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyFailure@TraceLoggingProvider@wil$dxgi.dll", 0x46220, 0x0, true, 0x71850ebe19d7d64c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnErrorReported@TraceLoggingProvider@wil$dxgi.dll", 0x46260, 0x0, true, 0x6da2e4c40a561c0a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportTelemetryFailure@TraceLoggingProvider@wil$dxgi.dll", 0x46874, 0x0, true, 0x25cdc5cb7316fff4)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportTraceLoggingFailure@TraceLoggingProvider@wil$dxgi.dll", 0x469c4, 0x0, true, 0xde51b9ba765cbf21)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif