#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0NdisNetworkInterfacePersistedState@@QEAA@XZ$ndis.sys", 0x391b4, 0x0, true, 0xd21d6bf02fcf4d3c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NdisNetworkInterfacePersistedState@@QEAA@XZ$ndis.sys", 0x38d0c, 0x0, true, 0x7ca3ff9899e1ba50)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif