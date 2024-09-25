#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$resourcePropertyInformation@ResourceInformation@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x3235e9708bfbb73d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$resourceTypeInformation@ResourceInformation@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x9c77f76f45bdca83)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif