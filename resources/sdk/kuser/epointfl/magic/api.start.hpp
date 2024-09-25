#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bIsZero@EPOINTFL$win32kfull.sys", 0x0, 0x0, false, 0x8f0a2a51603034c8)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bToPOINTL@EPOINTFL$win32kfull.sys", 0x47020, 0x0, true, 0x9123d1c68826f60c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif