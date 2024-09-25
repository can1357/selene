#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0EnterLeaveCrit@@QEAA@XZ$win32kbase.sys", 0x0, 0x0, false, 0xb60cd283db1ca09f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1EnterLeaveCrit@@QEAA@XZ$win32kfull.sys", 0x125430, 0x0, true, 0x2b8254915c33f2ca)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif