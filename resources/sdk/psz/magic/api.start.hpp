#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$pszType1$win32kfull.sys", 0x0, 0x0, false, 0xed1fd667dffb684f)
#else
#define _m0(...) __VA_ARGS__
#endif