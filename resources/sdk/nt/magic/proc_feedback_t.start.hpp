#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK.Lock", lock, 0x0, 0x40, true, 0xd27bba7971a03181)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK.CyclesLast", cycles_last, 0x40, 0x40, true, 0xcbba99f416b4cff7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK.CyclesActive", cycles_active, 0x80, 0x40, true, 0x6b9212c0f56e6b87)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::proc_feedback_counter_t*, 2>), "_PROC_FEEDBACK.Counters", counters, 0xc0, 0x80, true, 0xfac39ef4a35d2b7c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK.LastUpdateTime", last_update_time, 0x140, 0x40, true, 0x4a141b3d78c3faf7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK.UnscaledTime", unscaled_time, 0x180, 0x40, true, 0x12471582eb349030)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_PROC_FEEDBACK.UnaccountedTime", unaccounted_time, 0x1c0, 0x40, true, 0x1358ae13265cd616)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_PROC_FEEDBACK.ScaledTime", scaled_time, 0x200, 0x80, true, 0x4c7244a295260e23)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK.UnaccountedKernelTime", unaccounted_kernel_time, 0x280, 0x40, true, 0x815d9b170555bb83)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK.PerformanceScaledKernelTime", performance_scaled_kernel_time, 0x2c0, 0x40, true, 0xd1f226774735f2cf)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_FEEDBACK.UserTimeLast", user_time_last, 0x300, 0x20, true, 0x35f40dcc9221a217)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_FEEDBACK.KernelTimeLast", kernel_time_last, 0x320, 0x20, true, 0x1f13ecf2d649b453)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK.IdleGenerationNumberLast", idle_generation_number_last, 0x340, 0x40, true, 0x4d800d9197d66968)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK.HvActiveTimeLast", hv_active_time_last, 0x380, 0x40, true, 0x8fc4fbc8a02ae4bd)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK.StallCyclesLast", stall_cycles_last, 0x3c0, 0x40, true, 0x1d8aaaefe2c73f57)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_FEEDBACK.StallTime", stall_time, 0x400, 0x40, true, 0xeae92be4e570e486)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_FEEDBACK.KernelTimesIndex", kernel_times_index, 0x440, 0x8, true, 0xc829076888ce8bf7)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_FEEDBACK.CounterDiscardsIdleTime", counter_discards_idle_time, 0x448, 0x8, true, 0x3c07524c0e96a6a3)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_FEEDBACK.CounterReadOptimize", counter_read_optimize, 0x0, 0x0, false, 0x8af7cdd74c7566d0)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif