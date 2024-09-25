#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnDaemonTimer@ForegroundLaunch$win32kfull.sys", 0x0, 0x0, false, 0x670fcd849fccc852)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnFirstActivationAttempted@ForegroundLaunch$win32kfull.sys", 0x0, 0x0, false, 0xf92920307e6ac50d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PopProcessLaunchForegroundPolicy@ForegroundLaunch$win32kfull.sys", 0x0, 0x0, false, 0xfe5cb70f192163f3)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PushProcessLaunchForegroundPolicy@ForegroundLaunch$win32kfull.sys", 0x0, 0x0, false, 0x89a44d910f86269c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif