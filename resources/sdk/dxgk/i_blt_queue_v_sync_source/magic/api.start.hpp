#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetThreadPriority@IBltQueueVSyncSource$dxgkrnl.sys", 0x1af20, 0x0, true, 0xc27b1f92e7933f49)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PrepareNextVSync@IBltQueueVSyncSource$dxgkrnl.sys", 0x1adc0, 0x0, true, 0x9020e9cb5d1db1fe)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ResetTdrTimer@IBltQueueVSyncSource$dxgkrnl.sys", 0x1adc0, 0x0, true, 0x1f8a7bf699370885)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif