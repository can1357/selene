#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_THREAD_PROFILING_INFORMATION.HardwareCounters", hardware_counters, 0x0, 0x40, true, 0x1bc58e256916799a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THREAD_PROFILING_INFORMATION.Flags", flags, 0x40, 0x20, true, 0x753ee019c528f3e3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THREAD_PROFILING_INFORMATION.Enable", enable, 0x60, 0x20, true, 0x74956e3868de7979)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::thread_performance_data_t*), "_THREAD_PROFILING_INFORMATION.PerformanceData", performance_data, 0x80, 0x40, true, 0xd12266fafc7f0b3a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif