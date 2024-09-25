#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK_CYCLE_SNAP.CyclesActive", cycles_active, 0x0, 0x0, false, 0xf3b3e37f4f6d588e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK_CYCLE_SNAP.CyclesAffinitized", cycles_affinitized, 0x0, 0x0, false, 0x9407fb33365540f8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_PROC_PERF_CHECK_CYCLE_SNAP.TaggedThreadCycles", tagged_thread_cycles, 0x0, 0x0, false, 0x4ebc6628aa15f517)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK_CYCLE_SNAP.WorkloadClasses", workload_classes, 0x0, 0x0, false, 0x42d03bf63a96f808)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_PROC_PERF_CHECK_CYCLE_SNAP.ThreadTypeCycles", thread_type_cycles, 0x0, 0x0, false, 0xb5e006a9a0e1951e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif