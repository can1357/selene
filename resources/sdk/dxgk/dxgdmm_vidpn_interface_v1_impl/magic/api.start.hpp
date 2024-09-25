#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2dc990, 0x0, true, 0xc3e40e7e53b30d9e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x151cf0, 0x0, true, 0x1685b51c66d497f8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x124a30, 0x0, true, 0xc698435e66359aa4)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x153fa0, 0x0, true, 0xbabf132c6a53543b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeInterface@DXGDMM_VIDPN_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x17a1c8, 0x0, true, 0x4b59acbab815613c)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2de950, 0x0, true, 0x71694390e2ebb424)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x151be0, 0x0, true, 0x6d10cfcd1087c6b8)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x124920, 0x0, true, 0xc04b84eb44b69014)
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