#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateAlpcPort@ServerPorts@CoreMessagingK$win32kbase.sys", 0xaa338, 0x0, true, 0xdaa38c6ccc0368b3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreatePort@ServerPorts@CoreMessagingK$win32kbase.sys", 0xaa1bc, 0x0, true, 0x7097c5c985f4b617)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DrainPort@ServerPorts@CoreMessagingK$win32kbase.sys", 0xab0a0, 0x0, true, 0x162cc6d7871eb1cd)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnsureAlpcCallbackRegistered@ServerPorts@CoreMessagingK$win32kbase.sys", 0xab934, 0x0, true, 0xb302f355d52db5f9)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetAlpcPortName@ServerPorts@CoreMessagingK$win32kbase.sys", 0xab748, 0x0, true, 0x6c640eee3f9019d6)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HandleClientDisconnect@ServerPorts@CoreMessagingK$win32kbase.sys", 0xab2f8, 0x0, true, 0x3143c489702d2dbf)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HandleConnectionRequest@ServerPorts@CoreMessagingK$win32kbase.sys", 0xab3dc, 0x0, true, 0xfd026abec074c127)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OpenConnection@ServerPorts@CoreMessagingK$win32kbase.sys", 0xaae3c, 0x0, true, 0xabeb8be87ece31d9)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PortSignaledCallback@ServerPorts@CoreMessagingK$win32kbase.sys", 0xaac20, 0x0, true, 0x622c4c35a04dc1e6)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_PortInfos@ServerPorts@CoreMessagingK$win32kbase.sys", 0x257e78, 0x0, true, 0x8945748704cbb02a)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Send@ServerPorts@CoreMessagingK$win32kbase.sys", 0x699f8, 0x0, true, 0xafc39837f41d0be0)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Uninitialize@ServerPorts@CoreMessagingK$win32kbase.sys", 0xc3b80, 0x0, true, 0x9234a094f0d216bc)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UninitializeServerPort@ServerPorts@CoreMessagingK$win32kbase.sys", 0xaa770, 0x0, true, 0xdee9ddac45c94ba4)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_CallbackObject@ServerPorts@CoreMessagingK$win32kbase.sys", 0x257e80, 0x0, true, 0xdfee47ff7c89432b)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_CallbackRegistration@ServerPorts@CoreMessagingK$win32kbase.sys", 0x257e70, 0x0, true, 0xf452a39e6fae2995)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#endif