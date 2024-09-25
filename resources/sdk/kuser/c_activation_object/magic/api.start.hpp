#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@CActivationObject$win32kbase.sys", 0x6def0, 0x0, true, 0x9f057fc8d78c44cb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$notifyISM@CActivationObject$win32kbase.sys", 0x6c77c, 0x0, true, 0x5c0a1aa06dc7036c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CActivationObject$win32kbase.sys", 0x6d084, 0x0, true, 0xb26f72c353751e26)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif