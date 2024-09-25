#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnRegister@CTelemetryHelper$dxgi.dll", 0x0, 0x0, false, 0x39d1370ba53d04b0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyPerformanceMonitor@CTelemetryHelper$dxgi.dll", 0x69dd8, 0x0, true, 0x678cdd4420257471)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Register@CTelemetryHelper$dxgi.dll", 0x1cac0, 0x0, true, 0x426b8c014753e3d9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif