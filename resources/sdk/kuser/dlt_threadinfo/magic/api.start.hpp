#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$getDLT@DLT_THREADINFO$win32kbase.sys", 0x8d1e0, 0x0, true, 0x69b5115c5350a8b3)
#else
#define _m0(...) __VA_ARGS__
#endif