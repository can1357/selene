#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bNext@BEZIER64$win32kbase.sys", 0x14fb70, 0x0, true, 0x8c44f6ac90d2b5e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vInit@BEZIER64$win32kbase.sys", 0x150120, 0x0, true, 0xc1a3372e8f79f09f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif