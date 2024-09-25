#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ApplyBoost@GroupedProcessForegroundBoost$win32kbase.sys", 0x0, 0x0, false, 0x9701d3605bbe0b76)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ApplyDeBoost@GroupedProcessForegroundBoost$win32kbase.sys", 0x0, 0x0, false, 0xf1de38b8badfd9dd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Update@GroupedProcessForegroundBoost$win32kbase.sys", 0x0, 0x0, false, 0xd444aa7e2488ffa3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif