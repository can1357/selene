#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFORMANCE_DATA.Size", size, 0x0, 0x10, true, 0x2e49fa80a49abe3e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFORMANCE_DATA.Version", version, 0x10, 0x8, true, 0xdb95695565705)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFORMANCE_DATA.HwCountersCount", hw_counters_count, 0x18, 0x8, true, 0xf8843a888ff7f4c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFORMANCE_DATA.ContextSwitchCount", context_switch_count, 0x20, 0x20, true, 0xb062e2ba2ee86e76)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFORMANCE_DATA.WaitReasonBitMap", wait_reason_bit_map, 0x40, 0x40, true, 0xdc52d1283ecaa21d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFORMANCE_DATA.CycleTime", cycle_time, 0x80, 0x40, true, 0x410900599cf5767d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFORMANCE_DATA.RetryCount", retry_count, 0xc0, 0x20, true, 0xbae477aaf19689f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::hardware_counter_data_t>), "_PERFORMANCE_DATA.HwCounters", hw_counters, 0x100, 0x0, true, 0x391186d6bdfbe1cf)
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