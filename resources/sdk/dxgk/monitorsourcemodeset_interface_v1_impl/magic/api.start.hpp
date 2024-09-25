#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x17e5b0, 0x0, true, 0xe4a67e4adba7f660)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x17e840, 0x0, true, 0x7ef09db931a392fd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f2260, 0x0, true, 0xa0041011cf2d23fa)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x17dce0, 0x0, true, 0xca1d74437eba72ad)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x17e710, 0x0, true, 0x4aab5e82afba281)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DxgMonitorSourceModeSetInterfaceV1@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0xaed18, 0x0, true, 0x128bfd562d705a33)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNumModes@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x185470, 0x0, true, 0x73e7a453d1b27e78)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x17fbf0, 0x0, true, 0x1d72a1de7728f743)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif