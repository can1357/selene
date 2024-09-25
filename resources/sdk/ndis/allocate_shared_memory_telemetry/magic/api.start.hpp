#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z$ndis.sys", 0x0, 0x0, false, 0xf4d94c02173216a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ$ndis.sys", 0x0, 0x0, false, 0x3f1e3b586b2b7d46)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif