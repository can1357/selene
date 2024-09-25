#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.LimitFlags", limit_flags, 0x0, 0x20, true, 0xe084ad9ae8584ea3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.ViolationLimitFlags", violation_limit_flags, 0x20, 0x20, true, 0x5d53976041b248f3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.IoReadBytes", io_read_bytes, 0x40, 0x40, true, 0xe0572f39d7123323)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.IoReadBytesLimit", io_read_bytes_limit, 0x80, 0x40, true, 0x31f6f59d11c1c2bd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.IoWriteBytes", io_write_bytes, 0xc0, 0x40, true, 0x80ce3308322651bf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.IoWriteBytesLimit", io_write_bytes_limit, 0x100, 0x40, true, 0xfaf7c422437faf48)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.PerJobUserTime", per_job_user_time, 0x140, 0x40, true, 0xe4d47b2b3303fa83)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.PerJobUserTimeLimit", per_job_user_time_limit, 0x180, 0x40, true, 0xf9532a646e4f96b3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.JobMemory", job_memory, 0x1c0, 0x40, true, 0x2688dd01d461eaaf)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.JobHighMemoryLimit", job_high_memory_limit, 0x200, 0x40, true, 0x23dcbd2ed7957d67)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.JobMemoryLimit", job_memory_limit, 0x200, 0x40, true, 0x3344650e79f618c7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.RateControlTolerance", rate_control_tolerance, 0x240, 0x20, true, 0x9ad1e0449a452cc6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.CpuRateControlTolerance", cpu_rate_control_tolerance, 0x240, 0x20, true, 0x5a149c92c7d45c27)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.RateControlToleranceLimit", rate_control_tolerance_limit, 0x260, 0x20, true, 0x121f25c03920ac9)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.CpuRateControlToleranceLimit", cpu_rate_control_tolerance_limit, 0x260, 0x20, true, 0xe94a61f8478a5645)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.JobLowMemoryLimit", job_low_memory_limit, 0x280, 0x40, true, 0xae26142c48674cde)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.IoRateControlTolerance", io_rate_control_tolerance, 0x2c0, 0x20, true, 0x26367753e3c4737e)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.IoRateControlToleranceLimit", io_rate_control_tolerance_limit, 0x2e0, 0x20, true, 0x9e0f98132e36ffd5)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.NetRateControlTolerance", net_rate_control_tolerance, 0x300, 0x20, true, 0x431d4e17c3d2ecbe)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_LIMIT_VIOLATION_INFORMATION_2.NetRateControlToleranceLimit", net_rate_control_tolerance_limit, 0x320, 0x20, true, 0x16946e5c64a9e9a)
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
#define _m19
#endif