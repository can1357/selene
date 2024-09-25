#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@CBackTraceStoreEx@NSInstrumentation$win32kfull.sys", 0x0, 0x0, false, 0x3f3fe52cbbb9d594)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CBackTraceStoreEx@NSInstrumentation$win32kbase.sys", 0x15c744, 0x0, true, 0xf45ef5739278f827)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation$win32kfull.sys", 0x2dd938, 0x0, true, 0xcf9f2882338c9884)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif