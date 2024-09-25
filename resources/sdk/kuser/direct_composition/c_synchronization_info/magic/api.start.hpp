#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@CSynchronizationInfo@DirectComposition$win32kbase.sys", 0xc8700, 0x0, true, 0xa92682a9f0ec3d7d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsValid@CSynchronizationInfo@DirectComposition$win32kbase.sys", 0xc86e0, 0x0, true, 0xeab2842b0dd7c4a5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MarkInvalid@CSynchronizationInfo@DirectComposition$win32kbase.sys", 0xc86f0, 0x0, true, 0xcfb313f1d3b40d5a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif