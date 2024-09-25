#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$getDLT@DLT_CLIENTLIB$win32kbase.sys", 0xb1e40, 0x0, true, 0xa10061ab1cc2086c)
#else
#define _m0(...) __VA_ARGS__
#endif