#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CursorApiToString@Cursor@InputTraceLogging$win32kfull.sys", 0x0, 0x0, false, 0xb97033a022be59be)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetCursorSuppression@Cursor@InputTraceLogging$win32kfull.sys", 0x0, 0x0, false, 0x76ac9b9e41044183)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CursorSuppressionState@Cursor@InputTraceLogging$win32kfull.sys", 0x1eba70, 0x0, true, 0xd0adfe51e2675137)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnsureDpiCursor@Cursor@InputTraceLogging$win32kfull.sys", 0x1d4580, 0x0, true, 0x2740267bac81e24a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetCursorImage@Cursor@InputTraceLogging$win32kfull.sys", 0x2e418, 0x0, true, 0x62049237326d424f)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateBaseSize@Cursor@InputTraceLogging$win32kfull.sys", 0x1d479c, 0x0, true, 0x183f5219c50a4b19)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif