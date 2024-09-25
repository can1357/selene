#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ$ndis.sys", 0x0, 0x0, false, 0xb73722ea5727ac9d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetRunningDriver@NDIS_BIND_FILTER_DRIVER$ndis.sys", 0x106b58, 0x0, true, 0xfc073322339612c1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif