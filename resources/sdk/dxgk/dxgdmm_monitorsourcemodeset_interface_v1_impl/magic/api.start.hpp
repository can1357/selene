#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f2050, 0x0, true, 0x5c76ec3549fed86d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmmMonitorSourceModeSetInterfaceV1@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0xaed08, 0x0, true, 0xbe37cc1364c8b395)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f30b0, 0x0, true, 0x7ea03dda49ff52b8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif