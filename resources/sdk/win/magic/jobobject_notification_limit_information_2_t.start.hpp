#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.IoReadBytesLimit", io_read_bytes_limit, 0x0, 0x40, true, 0xa7a45c7da42c36c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.IoWriteBytesLimit", io_write_bytes_limit, 0x40, 0x40, true, 0x346a50f5a01e0691)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.PerJobUserTimeLimit", per_job_user_time_limit, 0x80, 0x40, true, 0x3a85d4d919ea5948)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.JobHighMemoryLimit", job_high_memory_limit, 0xc0, 0x40, true, 0xfc0bf951385a81af)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.JobMemoryLimit", job_memory_limit, 0xc0, 0x40, true, 0x6ecab8e326bbe55c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.RateControlTolerance", rate_control_tolerance, 0x100, 0x20, true, 0xfda540391df544f6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.CpuRateControlTolerance", cpu_rate_control_tolerance, 0x100, 0x20, true, 0xa64fb15986bc9d06)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(jobobject_rate_control_tolerance_interval_t ), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.RateControlToleranceInterval", rate_control_tolerance_interval, 0x120, 0x20, true, 0x76cd21c03ac6687a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(jobobject_rate_control_tolerance_interval_t ), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.CpuRateControlToleranceInterval", cpu_rate_control_tolerance_interval, 0x120, 0x20, true, 0x2ece46c4efe4fb84)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.LimitFlags", limit_flags, 0x140, 0x20, true, 0x730909c9bbd488e2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.IoRateControlTolerance", io_rate_control_tolerance, 0x160, 0x20, true, 0x2042dab837b0d0da)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.JobLowMemoryLimit", job_low_memory_limit, 0x180, 0x40, true, 0xca2261d4f1ad7a27)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(jobobject_rate_control_tolerance_interval_t ), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.IoRateControlToleranceInterval", io_rate_control_tolerance_interval, 0x1c0, 0x20, true, 0x7e7c26b80c09a0bf)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.NetRateControlTolerance", net_rate_control_tolerance, 0x1e0, 0x20, true, 0x3c43333cd68401cd)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(jobobject_rate_control_tolerance_interval_t ), "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.NetRateControlToleranceInterval", net_rate_control_tolerance_interval, 0x200, 0x20, true, 0xbd28131a83e9c006)
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
#endif