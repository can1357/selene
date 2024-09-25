#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z$win32kfull.sys", 0xa73b4, 0x0, true, 0x5b2685355229cf49)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SPRITEDDIACCESS@@QEAA@XZ$win32kfull.sys", 0xa70e4, 0x0, true, 0x6a1beaced68e509c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif