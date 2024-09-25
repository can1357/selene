#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2e2130, 0x0, true, 0x4117d6b41ccaaf42)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2e2340, 0x0, true, 0x775d0b13c51e93d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x144fc0, 0x0, true, 0x92f954107835d367)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x10e270, 0x0, true, 0x949d01669f80c7f2)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x145d40, 0x0, true, 0x48debde87b883e60)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNumModes@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x1275f0, 0x0, true, 0xa215c726a0c36380)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x17a4f8, 0x0, true, 0x97b4db1566755bd9)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2e3400, 0x0, true, 0x72c5fce639ceef4e)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x10e4c0, 0x0, true, 0x53296c80bd1f861)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#endif