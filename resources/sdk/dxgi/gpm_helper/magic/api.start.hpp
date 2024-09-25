#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetServiceInfo@GPMHelper$dxgi.dll", 0x0, 0x0, false, 0xc977e6968f042c7d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IdempotentInitialze@GPMHelper$dxgi.dll", 0x0, 0x0, false, 0x7e2a05e32111e02)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyPerformanceMonitor@GPMHelper$dxgi.dll", 0x0, 0x0, false, 0x75c8f2156a84ddc8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif