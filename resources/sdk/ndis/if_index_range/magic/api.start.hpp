#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocateAnyBit@IfIndexRange$ndis.sys", 0x2ba00, 0x0, true, 0x528b1d6b364bd349)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Grow@IfIndexRange$ndis.sys", 0x39878, 0x0, true, 0x9537477609bb2db2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif