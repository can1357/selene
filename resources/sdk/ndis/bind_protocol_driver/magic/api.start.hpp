#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ$ndis.sys", 0x0, 0x0, false, 0x700f9396e35864d5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER$ndis.sys", 0x1066fc, 0x0, true, 0x2e0542a408f8c378)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif