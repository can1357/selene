#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireFirstModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x1529b0, 0x0, true, 0x545c170bc9ace4b2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x1262f0, 0x0, true, 0x1699e4dcc4c5b617)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquirePinnedModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x152aa0, 0x0, true, 0x1e3be8bc5ecc880)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNumModes@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2de090, 0x0, true, 0xdb5b2d96ff58f01d)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeInterface@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x17a080, 0x0, true, 0x65925e6968964c9b)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x124840, 0x0, true, 0xe49806a90b321695)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x126540, 0x0, true, 0x29a3de1909623a8d)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x1552e0, 0x0, true, 0x9d65d621643574bc)
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