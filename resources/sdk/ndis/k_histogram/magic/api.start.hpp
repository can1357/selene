#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@KHistogram$ndis.sys", 0x0, 0x0, false, 0x9feb7a58c27e44fe)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IncrementBucket@KHistogram$ndis.sys", 0x0, 0x0, false, 0xc735ff6124a3ad0b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif