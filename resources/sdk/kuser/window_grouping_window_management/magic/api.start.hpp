#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HandleWindowDestruction@WindowGroupingWindowManagement$win32kfull.sys", 0x240fa0, 0x0, true, 0xbd46ab80e4a4ae5c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetWindowGroup@WindowGroupingWindowManagement$win32kfull.sys", 0x24130c, 0x0, true, 0xb59e21c2325418f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif