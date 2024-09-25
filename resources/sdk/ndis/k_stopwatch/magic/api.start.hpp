#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetElapsedTimeInMicroseconds@KStopwatch$ndis.sys", 0x0, 0x0, false, 0x38a2acb5b06919dc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Stop@KStopwatch$ndis.sys", 0x0, 0x0, false, 0x6baab24aac6ef9a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetElapsedTimeInMilliseconds@KStopwatch$ndis.sys", 0x233b0, 0x0, true, 0x24624f7ef6db2e6f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif