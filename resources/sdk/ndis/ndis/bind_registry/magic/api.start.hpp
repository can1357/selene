#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ComputeDelta@BindRegistry@Ndis$ndis.sys", 0x0, 0x0, false, 0x4da701fd76508d16)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadNetworkInterfaceListV2@BindRegistry@Ndis$ndis.sys", 0x0, 0x0, false, 0x54f54de330a16247)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadNetworkInterfaceV2@BindRegistry@Ndis$ndis.sys", 0x101380, 0x0, true, 0x4f912c91954d09b4)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Reload@BindRegistry@Ndis$ndis.sys", 0x107d08, 0x0, true, 0x1c81b7abaa6f2784)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateFilters@BindRegistry@Ndis$ndis.sys", 0x108040, 0x0, true, 0xd8b0fa61d5b7701a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateProtocols@BindRegistry@Ndis$ndis.sys", 0x1033b4, 0x0, true, 0x9472c45b6b61144a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif