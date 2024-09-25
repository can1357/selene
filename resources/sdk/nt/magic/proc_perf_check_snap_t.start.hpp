#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK_SNAP.Time", time, 0x0, 0x40, true, 0xc1447a5e371a2401)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK_SNAP.Active", active, 0x40, 0x40, true, 0x8ea8708beffcc1dc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK_SNAP.Stall", stall, 0x80, 0x40, true, 0xcdf24fb91d89a8d0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK_SNAP.FrequencyScaledActive", frequency_scaled_active, 0xc0, 0x40, true, 0xe901d92c0398f24)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK_SNAP.PerformanceScaledActive", performance_scaled_active, 0x100, 0x40, true, 0x285efe591e1add42)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK_SNAP.PerformanceScaledKernelActive", performance_scaled_kernel_active, 0x140, 0x40, true, 0x34b9f87fe7f72d48)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_PERF_CHECK_SNAP.ResponsivenessEvents", responsiveness_events, 0x2c0, 0x20, true, 0xe32cb2875cbf8714)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK_SNAP.CyclesActive", cycles_active, 0x180, 0x40, true, 0xdd8f6e5cc1e72069)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_PERF_CHECK_SNAP.CyclesAffinitized", cycles_affinitized, 0x1c0, 0x40, true, 0x3c288759bcccb7a0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_PROC_PERF_CHECK_SNAP.TaggedThreadCycles", tagged_thread_cycles, 0x200, 0xc0, true, 0x9b77fbbf6ca4d4fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif