#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_LONG_DPC_MITIGATION_INFORMATION.CurrentThreadId", current_thread_id, 0x0, 0x0, false, 0x371a3b2702cdf041)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_LONG_DPC_MITIGATION_INFORMATION.NextThreadId", next_thread_id, 0x0, 0x0, false, 0xa0d89ad6d338c381)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_PERFINFO_LONG_DPC_MITIGATION_INFORMATION.CurrentThreadPriority", current_thread_priority, 0x0, 0x0, false, 0xfbd6365f559bdb4c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_PERFINFO_LONG_DPC_MITIGATION_INFORMATION.NextThreadPriority", next_thread_priority, 0x0, 0x0, false, 0xef6264a049b5a0a0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_LONG_DPC_MITIGATION_INFORMATION.ScheduleDpcDelegate", schedule_dpc_delegate, 0x0, 0x0, false, 0xd414039759f1e5a5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_LONG_DPC_MITIGATION_INFORMATION.SwapToDpcDelegate", swap_to_dpc_delegate, 0x0, 0x0, false, 0xcc5671b8a7b70ca6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif