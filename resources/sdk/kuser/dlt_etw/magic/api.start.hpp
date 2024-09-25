#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$getDLT@DLT_ETW$win32kbase.sys", 0x127810, 0x0, true, 0x21b99761e7ff79f3)
#else
#define _m0(...) __VA_ARGS__
#endif