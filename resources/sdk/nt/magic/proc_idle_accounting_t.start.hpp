#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_IDLE_ACCOUNTING.StateCount", state_count, 0x0, 0x20, true, 0xd9444b62fccb5195)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_IDLE_ACCOUNTING.TotalTransitions", total_transitions, 0x20, 0x20, true, 0xfbfc84d182b3c6fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_IDLE_ACCOUNTING.ResetCount", reset_count, 0x40, 0x20, true, 0xadd4f9fc1581cb45)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_IDLE_ACCOUNTING.AbortCount", abort_count, 0x60, 0x20, true, 0x89132025bae7df8b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_IDLE_ACCOUNTING.StartTime", start_time, 0x80, 0x40, true, 0xd407d63a38dcd397)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_IDLE_ACCOUNTING.PriorIdleTime", prior_idle_time, 0xc0, 0x40, true, 0x16bee8b10c364b97)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ppm::idle_bucket_time_type_t), "_PROC_IDLE_ACCOUNTING.TimeUnit", time_unit, 0x100, 0x20, true, 0x194035333e0f8849)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::proc_idle_state_accounting_t, 1>), "_PROC_IDLE_ACCOUNTING.State", state, 0x140, 0x40, true, 0xe618048bbfbb1842)
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