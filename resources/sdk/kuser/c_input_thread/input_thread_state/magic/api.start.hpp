#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Init@InputThreadState@CInputThread$win32kbase.sys", 0xa9750, 0x0, true, 0x8daa70e5396d8cf3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsEmpty@InputThreadState@CInputThread$win32kbase.sys", 0xa9660, 0x0, true, 0x871c87fb338a600a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif