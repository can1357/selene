#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_userCritLoggingEnabled@Perf@InputTraceLogging$win32kbase.sys", 0x2577b0, 0x0, true, 0xc0c7c54a558eabb6)
#else
#define _m0(...) __VA_ARGS__
#endif