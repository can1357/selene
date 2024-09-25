#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$KevSkipVerification$ntoskrnl.exe", 0x5c414c, 0x0, true, 0x70d55cd5ccb846a3)
#else
#define _m0(...) __VA_ARGS__
#endif