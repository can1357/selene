#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNext@CBatchListProxy@CBatch@DirectComposition$win32kbase.sys", 0x1dc060, 0x0, true, 0xc03bbc5ddaac7dc2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReturnToApplication@CBatchListProxy@CBatch@DirectComposition$win32kbase.sys", 0x1dc5b0, 0x0, true, 0x85441f36849ec525)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif