#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_V2.IoReadBytesLimit", io_read_bytes_limit, 0x0, 0x40, true, 0x6e824f7731f5efdb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_V2.IoWriteBytesLimit", io_write_bytes_limit, 0x40, 0x40, true, 0x2f6e79b8661038c2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_V2.PerJobUserTimeLimit", per_job_user_time_limit, 0x80, 0x40, true, 0x4f8d7ac8b787fd97)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_V2.JobLowMemoryLimit", job_low_memory_limit, 0xc0, 0x40, true, 0x58cd8ed7219550eb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_V2.JobHighMemoryLimit", job_high_memory_limit, 0x100, 0x40, true, 0x117f40f52682933a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_V2.RateControlTolerance", rate_control_tolerance, 0x140, 0x20, true, 0xed67ca76aade9183)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(jobobject_rate_control_tolerance_interval_t ), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_V2.RateControlToleranceInterval", rate_control_tolerance_interval, 0x160, 0x20, true, 0x44e9e942e0147b8b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_V2.LimitFlags", limit_flags, 0x180, 0x20, true, 0xf2c0229d71444514)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif