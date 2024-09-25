#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_SESSION_PERF_COUNTERS.BufferMemoryPagedPool", buffer_memory_paged_pool, 0x0, 0x20, true, 0x2c5dc947e9b30e48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_SESSION_PERF_COUNTERS.BufferMemoryNonPagedPool", buffer_memory_non_paged_pool, 0x20, 0x20, true, 0x52675f6745ffe547)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_SESSION_PERF_COUNTERS.EventsLoggedCount", events_logged_count, 0x40, 0x40, true, 0x35325c53e20d06fb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_SESSION_PERF_COUNTERS.EventsLost", events_lost, 0x80, 0x20, true, 0x8637bc910bef0662)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_SESSION_PERF_COUNTERS.NumConsumers", num_consumers, 0xa0, 0x20, true, 0xeee3d97e9e706450)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif