#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeWindowGroupFunctionality@WindowGroupingFeature$win32kfull.sys", 0x2410f0, 0x0, true, 0x11b946bb8723ea)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnInitializeWindowGroupFunctionality@WindowGroupingFeature$win32kfull.sys", 0xc1678, 0x0, true, 0x9d6e5f8800c2b72d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif