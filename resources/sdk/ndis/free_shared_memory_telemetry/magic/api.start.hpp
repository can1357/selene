#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AggregateEvent@NdisFreeSharedMemoryTelemetry$ndis.sys", 0x0, 0x0, false, 0xa1abc233ea867b54)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0NdisFreeSharedMemoryTelemetry@@QEAA@PEBU_NDIS_SHARED_MEMORY_BLOCK@@@Z$ndis.sys", 0x0, 0x0, false, 0x90735be32a58353d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ$ndis.sys", 0x0, 0x0, false, 0x8be495ac19089678)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteEvent@NdisFreeSharedMemoryTelemetry$ndis.sys", 0x0, 0x0, false, 0xb1f958f9ef76713c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif