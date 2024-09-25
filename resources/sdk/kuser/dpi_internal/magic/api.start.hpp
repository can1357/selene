#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CalcDpi@DpiInternal$win32kbase.sys", 0xd0130, 0x0, true, 0xf3d785fc32f9c7e2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CalcDpiOverride@DpiInternal$win32kbase.sys", 0xd0010, 0x0, true, 0xf28d200f128d7561)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SatisfyMinResolutionBarForScaleIdx@DpiInternal$win32kbase.sys", 0x1546fc, 0x0, true, 0xd20a0b1c0eba9511)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ScaleOverrideTestHookCore@DpiInternal$win32kbase.sys", 0xcf634, 0x0, true, 0xde4872cbfd91236e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif