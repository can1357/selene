#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCurrentValue@KnobDescriptor$ndis.sys", 0x0, 0x0, false, 0xa4a0ca6966f68db4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetCurrentValue@KnobDescriptor$ndis.sys", 0x0, 0x0, false, 0x47e2284984883829)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif