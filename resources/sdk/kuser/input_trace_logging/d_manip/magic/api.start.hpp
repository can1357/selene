#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HandleDelegatedInput@DManip@InputTraceLogging$win32kfull.sys", 0x1e0e74, 0x0, true, 0xfea56431571e67e7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReassignMessage@DManip@InputTraceLogging$win32kfull.sys", 0x1e14c0, 0x0, true, 0xc3bcde5861046efb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif