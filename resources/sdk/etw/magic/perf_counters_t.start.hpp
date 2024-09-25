#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_PERF_COUNTERS.TotalActiveSessions", total_active_sessions, 0x0, 0x20, true, 0xe4e58650521f02e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_PERF_COUNTERS.TotalBufferMemoryNonPagedPool", total_buffer_memory_non_paged_pool, 0x20, 0x20, true, 0xf1afd4be402e7cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_PERF_COUNTERS.TotalBufferMemoryPagedPool", total_buffer_memory_paged_pool, 0x40, 0x20, true, 0x5e4278276f6d5f0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_PERF_COUNTERS.TotalGuidsEnabled", total_guids_enabled, 0x60, 0x20, true, 0xf9ff460be97907d6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_PERF_COUNTERS.TotalGuidsNotEnabled", total_guids_not_enabled, 0x80, 0x20, true, 0x8d62f0373aeda39e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_PERF_COUNTERS.TotalGuidsPreEnabled", total_guids_pre_enabled, 0xa0, 0x20, true, 0x4cf22f9b1d69b30f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif