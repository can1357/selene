#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyBindComplete@_NDIS_PROTOCOL_BLOCK$ndis.sys", 0x1057c0, 0x0, true, 0xf66e229c50c7aa68)
#else
#define _m0(...) __VA_ARGS__
#endif