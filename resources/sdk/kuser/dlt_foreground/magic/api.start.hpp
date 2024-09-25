#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$getDLT@DLT_FOREGROUND$win32kbase.sys", 0xbc030, 0x0, true, 0xb610395732fd0b66)
#else
#define _m0(...) __VA_ARGS__
#endif