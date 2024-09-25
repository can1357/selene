#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireFirstTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2dc7a0, 0x0, true, 0x666d064b4ff0c58f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireNextTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2dcec0, 0x0, true, 0xbfd4ff0c816f750d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNumTargets@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2de4d0, 0x0, true, 0xaaad5759f2e571ac)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeInterface@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x17a234, 0x0, true, 0xd48a22839c8640b4)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2ded10, 0x0, true, 0x8a62ea6e4f27d1ca)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif