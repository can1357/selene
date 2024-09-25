#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessInput@Keyboard@InputTraceLogging$win32kbase.sys", 0x1aa3b8, 0x0, true, 0xb2a98278e6b2ecb2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DropInput@Keyboard@InputTraceLogging$win32kbase.sys", 0x1a9cf4, 0x0, true, 0x5e76d43735af7011)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif