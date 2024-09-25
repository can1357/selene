#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.LimitFlags", limit_flags, 0x0, 0x20, true, 0x382e34d707c528ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.ViolationLimitFlags", violation_limit_flags, 0x20, 0x20, true, 0x9d6e4fe9776ca33f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.IoReadBytes", io_read_bytes, 0x40, 0x40, true, 0xf21fd46a4d1f1507)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.IoReadBytesLimit", io_read_bytes_limit, 0x80, 0x40, true, 0x68987f68687b0c51)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.IoWriteBytes", io_write_bytes, 0xc0, 0x40, true, 0xd6f236e009a06e54)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.IoWriteBytesLimit", io_write_bytes_limit, 0x100, 0x40, true, 0xed9a77c1332e5cbf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.PerJobUserTime", per_job_user_time, 0x140, 0x40, true, 0x335edc75b9eb3ae4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.PerJobUserTimeLimit", per_job_user_time_limit, 0x180, 0x40, true, 0xe9bee4546bb95446)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.JobMemory", job_memory, 0x1c0, 0x40, true, 0xdeb7d914edc6b700)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.JobLowMemoryLimit", job_low_memory_limit, 0x200, 0x40, true, 0xb1cd72d074cd81d9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.JobHighMemoryLimit", job_high_memory_limit, 0x240, 0x40, true, 0x4d01ef392bf18032)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.RateControlTolerance", rate_control_tolerance, 0x280, 0x20, true, 0x35df2a513db7599f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.RateControlToleranceLimit", rate_control_tolerance_limit, 0x2a0, 0x20, true, 0xdd645b2a39b6d1c9)
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
#endif