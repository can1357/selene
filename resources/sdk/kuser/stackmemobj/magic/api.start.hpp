#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0STACKMEMOBJ@@QEAA@KKJJJ@Z$win32kfull.sys", 0x2b882c, 0x0, true, 0xcb7ddd546569fc5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1STACKMEMOBJ@@QEAA@XZ$win32kfull.sys", 0x2b892c, 0x0, true, 0x8a64561c8646fb64)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif