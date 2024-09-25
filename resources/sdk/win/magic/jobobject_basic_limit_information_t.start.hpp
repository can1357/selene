#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_BASIC_LIMIT_INFORMATION.PerProcessUserTimeLimit", per_process_user_time_limit, 0x0, 0x40, true, 0x22cddfbefd92a284)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOBOBJECT_BASIC_LIMIT_INFORMATION.PerJobUserTimeLimit", per_job_user_time_limit, 0x40, 0x40, true, 0xdeb38bb1686106ba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_BASIC_LIMIT_INFORMATION.LimitFlags", limit_flags, 0x80, 0x20, true, 0x385762fb4193074d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_BASIC_LIMIT_INFORMATION.MinimumWorkingSetSize", minimum_working_set_size, 0xc0, 0x40, true, 0x2816ccf0fa0778be)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_BASIC_LIMIT_INFORMATION.MaximumWorkingSetSize", maximum_working_set_size, 0x100, 0x40, true, 0x2342d9b2de114466)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_BASIC_LIMIT_INFORMATION.ActiveProcessLimit", active_process_limit, 0x140, 0x20, true, 0xac357b28f23b57ff)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_BASIC_LIMIT_INFORMATION.Affinity", affinity, 0x180, 0x40, true, 0x287d1d075abf73a8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_BASIC_LIMIT_INFORMATION.PriorityClass", priority_class, 0x1c0, 0x20, true, 0x46e8dc4c324f49f9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_BASIC_LIMIT_INFORMATION.SchedulingClass", scheduling_class, 0x1e0, 0x20, true, 0x2c1b5f77a8f6b90c)
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
#endif