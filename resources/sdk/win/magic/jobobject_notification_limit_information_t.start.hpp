#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION.IoReadBytesLimit", io_read_bytes_limit, 0x0, 0x40, true, 0xead2d2ca6078762)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION.IoWriteBytesLimit", io_write_bytes_limit, 0x40, 0x40, true, 0x9d3c173d23fc7632)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION.PerJobUserTimeLimit", per_job_user_time_limit, 0x80, 0x40, true, 0xa8cff15c16b446fc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION.JobMemoryLimit", job_memory_limit, 0xc0, 0x40, true, 0xc42833ca154faa84)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::jobobject_rate_control_tolerance_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION.RateControlTolerance", rate_control_tolerance, 0x100, 0x20, true, 0x5e91157b10f901c9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(jobobject_rate_control_tolerance_interval_t ), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION.RateControlToleranceInterval", rate_control_tolerance_interval, 0x120, 0x20, true, 0x32df8db3d269aea9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION.LimitFlags", limit_flags, 0x140, 0x20, true, 0x5253c8bb70401699)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif