#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.LimitFlags", limit_flags, 0x0, 0x20, true, 0x8396960a5b59cff1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.ViolationLimitFlags", violation_limit_flags, 0x20, 0x20, true, 0xe7344762cab007e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.IoReadBytes", io_read_bytes, 0x40, 0x40, true, 0x697f656746913c5f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.IoReadBytesLimit", io_read_bytes_limit, 0x80, 0x40, true, 0xf253438a38a2fa07)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.IoWriteBytes", io_write_bytes, 0xc0, 0x40, true, 0x846483433606c4c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.IoWriteBytesLimit", io_write_bytes_limit, 0x100, 0x40, true, 0x812086be231d8b19)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.PerJobUserTime", per_job_user_time, 0x140, 0x40, true, 0xc9bb024b55c74489)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.PerJobUserTimeLimit", per_job_user_time_limit, 0x180, 0x40, true, 0x42b093f953082ca9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.JobMemory", job_memory, 0x1c0, 0x40, true, 0x9bbb34dea39f5d2f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.JobMemoryLimit", job_memory_limit, 0x200, 0x40, true, 0x9954dc5a8256a40c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.RateControlTolerance", rate_control_tolerance, 0x240, 0x20, true, 0x39398e67dfa64f6)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.RateControlToleranceLimit", rate_control_tolerance_limit, 0x260, 0x20, true, 0x8ec16a7a313aa8ce)
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
#endif