#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@CMonitorPDO@OPM$win32kbase.sys", 0x14b9a0, 0x0, true, 0xe5017078cef2ceef)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@OPM$win32kbase.sys", 0xcb870, 0x0, true, 0xc27d83bd31706de7)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DoesProcessOwnProtectedOutput@CMonitorPDO@OPM$win32kbase.sys", 0x14ba90, 0x0, true, 0x51223cc329adaf6e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsDestroyed@CMonitorPDO@OPM$win32kfull.sys", 0x154f80, 0x0, true, 0x180bc5eb7e05e04c)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MonitorInterfaceCallback@CMonitorPDO@OPM$win32kbase.sys", 0x14baa0, 0x0, true, 0xefab72febd7ff402)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MonitorInterfaceCallbackInternal@CMonitorPDO@OPM$win32kbase.sys", 0x14bac0, 0x0, true, 0xcb8ded3e8960bf6e)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MonitorPDORemovalCallback@CMonitorPDO@OPM$win32kbase.sys", 0x14bb80, 0x0, true, 0xc22bb60035c9c6e0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif