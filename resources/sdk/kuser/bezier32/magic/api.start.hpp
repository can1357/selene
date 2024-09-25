#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bInit@BEZIER32$win32kbase.sys", 0x8eee0, 0x0, true, 0xbb97b5ecae5e5789)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bNext@BEZIER32$win32kbase.sys", 0x8ec50, 0x0, true, 0xa9c214d99b8e2595)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif