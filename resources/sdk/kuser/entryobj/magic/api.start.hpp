#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bOwnedBy@ENTRYOBJ$win32kbase.sys", 0x82a80, 0x0, true, 0x90771476759a8079)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$hSetup@ENTRYOBJ$win32kbase.sys", 0x1f3a0, 0x0, true, 0xa48b1306418e4a70)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif