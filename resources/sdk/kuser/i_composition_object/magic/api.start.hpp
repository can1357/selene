#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Delete@ICompositionObject$win32kbase.sys", 0xc84a0, 0x0, true, 0x7bcaeb578c265e7d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Close@ICompositionObject$win32kbase.sys", 0xc84a0, 0x0, true, 0xd0a54e05f9ce78ff)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OkToClose@ICompositionObject$win32kbase.sys", 0xc84a0, 0x0, true, 0x1ce876064b3478b6)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Open@ICompositionObject$win32kbase.sys", 0xc84a0, 0x0, true, 0x6b981d569c70b951)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif