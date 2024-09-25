#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllowInAnySession@DispConfigTypes$win32kbase.sys", 0x0, 0x0, false, 0x1226330b4cd8ccf)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetGetterTypeSize@DispConfigTypes$win32kbase.sys", 0x0, 0x0, false, 0xc05a1556d1b84626)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSetterTypeSize@DispConfigTypes$win32kbase.sys", 0x0, 0x0, false, 0x193998ace6cc28bd)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RequiresUserCritShared@DispConfigTypes$win32kbase.sys", 0x0, 0x0, false, 0x1e3de841923b5a0d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif