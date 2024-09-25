#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@ExecutionContextLibrary$ndis.sys", 0x0, 0x0, false, 0xcd1f899906b69bcd)
#else
#define _m0(...) __VA_ARGS__
#endif