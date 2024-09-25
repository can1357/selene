#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ForEachLink@NDIS_BIND_DRIVER_BASE$ndis.sys", 0x1056b8, 0x0, true, 0x8a67086c0142f247)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE$ndis.sys", 0x105660, 0x0, true, 0x19e135f06d37dd05)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif