#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z$win32kfull.sys", 0xefba0, 0x0, true, 0xcc4aac8138b89dc3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MULTISPRITEDDIACCESS@@QEAA@XZ$win32kfull.sys", 0xefb50, 0x0, true, 0xe8d5279c2bb5915a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif