#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUpdateDpiScaling@DWMSPRITE$win32kfull.sys", 0xd0248, 0x0, true, 0x723775100b4674da)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetLogicalSurface@DWMSPRITE$win32kfull.sys", 0xd0514, 0x0, true, 0x249d668722c2ba83)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif