#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CManualResetEvent$win32kfull.sys", 0x10b640, 0x0, true, 0x88c0bc9b14322474)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@CManualResetEvent$win32kfull.sys", 0x121528, 0x0, true, 0xc2859454f62a83ba)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif