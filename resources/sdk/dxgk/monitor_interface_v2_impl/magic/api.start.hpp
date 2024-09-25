#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DxgMiniportMonitorInterfaceV2@DXGK_MONITOR_INTERFACE_V2_IMPL$dxgkrnl.sys", 0xaed50, 0x0, true, 0x34be5f1a93138a02)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL$dxgkrnl.sys", 0x181870, 0x0, true, 0x37a568a25d378d02)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL$dxgkrnl.sys", 0x184b00, 0x0, true, 0x89e4f1046745c44)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif