#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Broadcast@InputConfig$win32kbase.sys", 0x56cb0, 0x0, true, 0x343302cef0c71f99)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInputSpace@InputConfig$win32kbase.sys", 0x1baa6c, 0x0, true, 0x2c4354d1934f92d5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPointerDeviceConfig@InputConfig$win32kbase.sys", 0x1bab28, 0x0, true, 0xa7e7701c3e14f2ec)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RegionFromPoint@InputConfig$win32kbase.sys", 0x59318, 0x0, true, 0x95c685af3fddaf75)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceCurrentConfig@InputConfig$win32kbase.sys", 0x57034, 0x0, true, 0x33fffcf957d87dab)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif