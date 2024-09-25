#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CDisableScanoutToken$dxgkrnl.sys", 0x0, 0x0, false, 0x29903c8a31abc4cc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetModel@CDisableScanoutToken$dxgkrnl.sys", 0x0, 0x0, false, 0xcc83ed901ec4a44)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InFrame@CDisableScanoutToken$dxgkrnl.sys", 0x0, 0x0, false, 0x3549295296fddf04)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendToTokenManager@CDisableScanoutToken$dxgkrnl.sys", 0x0, 0x0, false, 0x82a92bac3d496fea)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif