#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetElapsedTimeInMilliseconds@NdisStopwatch$ndis.sys", 0x0, 0x0, false, 0xb8dfe80eacd08760)
#else
#define _m0(...) __VA_ARGS__
#endif