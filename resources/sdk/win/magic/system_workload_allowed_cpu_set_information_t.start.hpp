#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_WORKLOAD_ALLOWED_CPU_SET_INFORMATION.WorkloadClass", workload_class, 0x0, 0x40, true, 0x70227d27bf53935e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_SYSTEM_WORKLOAD_ALLOWED_CPU_SET_INFORMATION.CpuSets", cpu_sets, 0x40, 0x40, true, 0xe479f13895e52fb0)
#else
#define _m00
#define _m01
#endif