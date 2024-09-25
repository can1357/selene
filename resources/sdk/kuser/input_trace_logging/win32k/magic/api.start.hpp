#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ShellWindowPosApplied@Win32k@InputTraceLogging$win32kfull.sys", 0x0, 0x0, false, 0x1641a9cdae6b9bbf)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnReadNotification@Win32k@InputTraceLogging$win32kbase.sys", 0x1ac0f4, 0x0, true, 0x97d57bc6e5cc97b2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddInertiaInfo@Win32k@InputTraceLogging$win32kbase.sys", 0x1b0560, 0x0, true, 0xa6d64f48a3c78520)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveInertiaInfo@Win32k@InputTraceLogging$win32kbase.sys", 0x1b0d4c, 0x0, true, 0x87573a73e70cc6e0)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SessionInfo@Win32k@InputTraceLogging$win32kbase.sys", 0x132710, 0x0, true, 0x1887f785e4d1af1a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif