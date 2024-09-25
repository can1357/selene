#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPrimaryRegion@Mouse@InputConfig$win32kbase.sys", 0x0, 0x0, false, 0x7c724dca22d0d995)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetUnionRegion@Mouse@InputConfig$win32kbase.sys", 0x0, 0x0, false, 0x7c8148df2733ac4c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPrimaryRect@Mouse@InputConfig$win32kbase.sys", 0x1bacf0, 0x0, true, 0x13cc279d6b7f07cd)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetUnionRect@Mouse@InputConfig$win32kbase.sys", 0x5cf60, 0x0, true, 0x41883199d2776cb7)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInputSpaceId@Mouse@InputConfig$win32kbase.sys", 0x5fbd0, 0x0, true, 0xd00a66401d157136)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RegionFromPoint@Mouse@InputConfig$win32kbase.sys", 0x592a8, 0x0, true, 0xa34c016b658c41f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif