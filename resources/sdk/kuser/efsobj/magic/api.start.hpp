#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bAdd@EFSOBJ$win32kfull.sys", 0x6f164, 0x0, true, 0xb8383239d84e6795)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bGrow@EFSOBJ$win32kfull.sys", 0x38d40, 0x0, true, 0x5b55bf75bcfc3eb2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteEFE@EFSOBJ$win32kfull.sys", 0x6f2d8, 0x0, true, 0x6386945af32618dc)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif