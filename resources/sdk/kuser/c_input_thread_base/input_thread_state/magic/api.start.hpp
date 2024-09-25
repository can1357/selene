#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Init@InputThreadState@CInputThreadBase$win32kbase.sys", 0x0, 0x0, false, 0x96a5b5477de5d64c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsEmpty@InputThreadState@CInputThreadBase$win32kbase.sys", 0x0, 0x0, false, 0xf39c22f6aa4c059f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif