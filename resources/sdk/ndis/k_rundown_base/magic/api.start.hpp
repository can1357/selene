#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TryAcquire@KRundownBase$ndis.sys", 0xac7f0, 0x0, true, 0xff7875e5b77ce2ce)
#else
#define _m0(...) __VA_ARGS__
#endif