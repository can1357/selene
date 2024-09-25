#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$getDLT@DLT_QUEUE$win32kbase.sys", 0x71fa0, 0x0, true, 0xb2fa483760fce94)
#else
#define _m0(...) __VA_ARGS__
#endif