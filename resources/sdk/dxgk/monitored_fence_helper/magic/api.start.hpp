#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateSynchObject@MonitoredFenceHelper$dxgkrnl.sys", 0x2b7210, 0x0, true, 0xfb6be8b8ba933e2e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroySynchObject@MonitoredFenceHelper$dxgkrnl.sys", 0x2b731c, 0x0, true, 0xe04b4180153f6fa7)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Update@MonitoredFenceHelper$dxgkrnl.sys", 0x2b7e84, 0x0, true, 0x99b6f772f0c9ec61)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif