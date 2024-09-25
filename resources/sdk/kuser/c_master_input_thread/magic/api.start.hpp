#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CMasterInputThread$win32kbase.sys", 0x0, 0x0, false, 0x86d2097ee6192219)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsInputThreadDesktopActive@CMasterInputThread$win32kbase.sys", 0x0, 0x0, false, 0xcf680ec9d4b0ba5b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif