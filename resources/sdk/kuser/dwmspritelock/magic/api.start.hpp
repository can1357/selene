#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z$win32kfull.sys", 0x74514, 0x0, true, 0xd4cf5739556642ee)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DWMSPRITELOCK@@QEAA@XZ$win32kfull.sys", 0x744cc, 0x0, true, 0xab5dd72cea62fbf3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif