#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DwmHitTestLeaveEnterCrit@@QEAA@XZ$win32kbase.sys", 0x127920, 0x0, true, 0xc5a0a843027df2f2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DwmHitTestLeaveEnterCrit@@QEAA@XZ$win32kbase.sys", 0x127950, 0x0, true, 0xe37b3f6f26f86a10)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif