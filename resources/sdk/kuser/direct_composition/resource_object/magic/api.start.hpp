#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObjectInit@ResourceObject@DirectComposition$win32kbase.sys", 0xb120, 0x0, true, 0x40ecba213bfd831c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ResolveHandle@ResourceObject@DirectComposition$win32kbase.sys", 0x8fd84, 0x0, true, 0x99fcb019fc47dc14)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif