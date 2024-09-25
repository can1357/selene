#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpperBindValueName@Ndis$ndis.sys", 0x0, 0x0, false, 0x237b47d4e728456)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FilterListValueName@Ndis$ndis.sys", 0xc71d8, 0x0, true, 0x989d692acca9954d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProtocolListValueName@Ndis$ndis.sys", 0xc71c8, 0x0, true, 0x6f59e93c8ffd27bd)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif