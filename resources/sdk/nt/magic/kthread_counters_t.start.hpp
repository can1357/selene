#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD_COUNTERS.WaitReasonBitMap", wait_reason_bit_map, 0x0, 0x40, true, 0xab0503cc705fbabf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::thread_performance_data_t*), "_KTHREAD_COUNTERS.UserData", user_data, 0x40, 0x40, true, 0xf38580c63d3716e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD_COUNTERS.Flags", flags, 0x80, 0x20, true, 0x8b187b81af7e52f9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD_COUNTERS.ContextSwitches", context_switches, 0xa0, 0x20, true, 0x22913dc6ae9ccb03)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD_COUNTERS.CycleTimeBias", cycle_time_bias, 0xc0, 0x40, true, 0x5a54344af8e98a2c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD_COUNTERS.HardwareCounters", hardware_counters, 0x100, 0x40, true, 0xfaccc6327dde3bfb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::counter_reading_t, 16>), "_KTHREAD_COUNTERS.HwCounter", hw_counter, 0x140, 0x0, true, 0x46f30906184299a5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif