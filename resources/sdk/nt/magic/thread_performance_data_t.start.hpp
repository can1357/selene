#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_THREAD_PERFORMANCE_DATA.Size", size, 0x0, 0x10, true, 0xf2d90461b9f3e103)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_THREAD_PERFORMANCE_DATA.Version", version, 0x10, 0x10, true, 0xb00e404e9376487d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_number_t), "_THREAD_PERFORMANCE_DATA.ProcessorNumber", processor_number, 0x20, 0x20, true, 0x6993da592c9a3337)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THREAD_PERFORMANCE_DATA.ContextSwitches", context_switches, 0x40, 0x20, true, 0x6814c10bae464932)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THREAD_PERFORMANCE_DATA.HwCountersCount", hw_counters_count, 0x60, 0x20, true, 0xb6d12857623f7a22)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_THREAD_PERFORMANCE_DATA.UpdateCount", update_count, 0x80, 0x40, true, 0x3b26f888cbf0842c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_THREAD_PERFORMANCE_DATA.WaitReasonBitMap", wait_reason_bit_map, 0xc0, 0x40, true, 0x24e2ab61e6469682)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_THREAD_PERFORMANCE_DATA.HardwareCounters", hardware_counters, 0x100, 0x40, true, 0x3baff133b6539f8e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::counter_reading_t), "_THREAD_PERFORMANCE_DATA.CycleTime", cycle_time, 0x140, 0xc0, true, 0x85a979a4caf9ad70)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::counter_reading_t, 16>), "_THREAD_PERFORMANCE_DATA.HwCounters", hw_counters, 0x200, 0x0, true, 0xcfb215e9d3bb4580)
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