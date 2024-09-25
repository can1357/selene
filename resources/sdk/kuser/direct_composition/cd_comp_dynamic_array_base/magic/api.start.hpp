#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Grow@CDCompDynamicArrayBase@DirectComposition$win32kbase.sys", 0x37294, 0x0, true, 0xdda800e3013f0393)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetCount@CDCompDynamicArrayBase@DirectComposition$win32kbase.sys", 0x903e0, 0x0, true, 0xb8b6a8bf0a6b983b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Shrink@CDCompDynamicArrayBase@DirectComposition$win32kbase.sys", 0x9095c, 0x0, true, 0xb0efb22b7f94c0de)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif