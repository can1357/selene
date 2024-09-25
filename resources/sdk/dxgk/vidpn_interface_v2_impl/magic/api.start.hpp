#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL$dxgkrnl.sys", 0x0, 0x0, false, 0xde52a93ca6926c52)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL$dxgkrnl.sys", 0x0, 0x0, false, 0x7a5d02dd35c0a91e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeInterface@DXGK_VIDPN_INTERFACE_V2_IMPL$dxgkrnl.sys", 0x0, 0x0, false, 0x62f3f4b89be897bb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif