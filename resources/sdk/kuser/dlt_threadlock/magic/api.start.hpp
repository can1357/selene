#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$getDLT@DLT_THREADLOCK$win32kbase.sys", 0x303b0, 0x0, true, 0xa0dabeb48b3d5ae)
#else
#define _m0(...) __VA_ARGS__
#endif