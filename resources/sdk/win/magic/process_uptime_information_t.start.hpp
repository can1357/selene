#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_UPTIME_INFORMATION.QueryInterruptTime", query_interrupt_time, 0x0, 0x40, true, 0xef5659d676855a0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_UPTIME_INFORMATION.QueryUnbiasedTime", query_unbiased_time, 0x40, 0x40, true, 0xc3b5035b2b309378)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_UPTIME_INFORMATION.EndInterruptTime", end_interrupt_time, 0x80, 0x40, true, 0x8fb65db22ed205d8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_UPTIME_INFORMATION.TimeSinceCreation", time_since_creation, 0xc0, 0x40, true, 0x7531026a0fbd8fed)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_UPTIME_INFORMATION.Uptime", uptime, 0x100, 0x40, true, 0x436b2ed824611111)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_UPTIME_INFORMATION.SuspendedTime", suspended_time, 0x140, 0x40, true, 0x4c6e9017bcc808c9)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PROCESS_UPTIME_INFORMATION.HangCount", hang_count, 0x180, 0x4, true, 0xa115d39f50e1de95, 4, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PROCESS_UPTIME_INFORMATION.GhostCount", ghost_count, 0x184, 0x4, true, 0x6319a46fe7309ec1, 4, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_UPTIME_INFORMATION.Crashed", crashed, 0x188, 0x1, true, 0x931fb3eed322de17, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_UPTIME_INFORMATION.Terminated", terminated, 0x189, 0x1, true, 0xda8bc06e10cc79de, 1, uint32_t)
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