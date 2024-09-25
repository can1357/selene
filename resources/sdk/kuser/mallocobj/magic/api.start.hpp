#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MALLOCOBJ@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0xf4c1ef76ebab05c0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MALLOCOBJ@@QEAA@K@Z$win32kfull.sys", 0x7174c, 0x0, true, 0xbf6fd965d6be14e6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif