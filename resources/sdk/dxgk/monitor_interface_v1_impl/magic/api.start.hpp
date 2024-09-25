#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f1a10, 0x0, true, 0x164516ef391ec9c7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DxgMiniportMonitorInterfaceV1@DXGK_MONITOR_INTERFACE_V1_IMPL$dxgkrnl.sys", 0xaed88, 0x0, true, 0x2bbafea939c2216b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f2490, 0x0, true, 0x92abe90845cb9aca)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f26e0, 0x0, true, 0x7cf9716c62c3bcc8)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f3270, 0x0, true, 0x71a4a755445014cb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif