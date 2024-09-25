#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$pppUserModeCallback$win32kfull.sys", 0x13f004, 0x0, true, 0x99afc83aa05eeb75)
#else
#define _m0(...) __VA_ARGS__
#endif