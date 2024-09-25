#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f1800, 0x0, true, 0xb4bbba2b77a9b816)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f1e30, 0x0, true, 0x17ecf7080e776d17)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DxgMonitorFrequencyRangeSetInterfaceV1@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0xaedd0, 0x0, true, 0x5e29d42492d2f190)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNumFrequencyRanges@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f2b10, 0x0, true, 0xe7b6d8d4ef326e45)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f2ed0, 0x0, true, 0x1a61abc60f4923ad)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif