#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL$dxgkrnl.sys", 0x0, 0x0, false, 0x75b1f3938045e297)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL$dxgkrnl.sys", 0x0, 0x0, false, 0xbeb7cf3e2788f560)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif