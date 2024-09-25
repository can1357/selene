#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetActivePpiPreference@CRotationMgr$win32kfull.sys", 0x1d1630, 0x0, true, 0x659e363719250a31)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsActivePpi@CRotationMgr$win32kfull.sys", 0x8d08, 0x0, true, 0xac57a3069d820ee8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif