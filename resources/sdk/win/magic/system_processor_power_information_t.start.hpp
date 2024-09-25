#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.CurrentFrequency", current_frequency, 0x0, 0x8, true, 0x3f4032ba1adaae55)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.ThermalLimitFrequency", thermal_limit_frequency, 0x8, 0x8, true, 0xcea47e091175575d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.ConstantThrottleFrequency", constant_throttle_frequency, 0x10, 0x8, true, 0x21a66cee914d154f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.DegradedThrottleFrequency", degraded_throttle_frequency, 0x18, 0x8, true, 0xd75d8ea0893ab8ba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.LastBusyFrequency", last_busy_frequency, 0x20, 0x8, true, 0xa3ed0d817fe0edff)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.LastC3Frequency", last_c3_frequency, 0x28, 0x8, true, 0x9c342033ea7a0b43)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.LastAdjustedBusyFrequency", last_adjusted_busy_frequency, 0x30, 0x8, true, 0xeb674fc5cfce65ee)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.ProcessorMinThrottle", processor_min_throttle, 0x38, 0x8, true, 0xa03893520c239d08)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.ProcessorMaxThrottle", processor_max_throttle, 0x40, 0x8, true, 0x37ee6f0a5048dccd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.NumberOfFrequencies", number_of_frequencies, 0x60, 0x20, true, 0xe2b0273a0d03b7bf)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.PromotionCount", promotion_count, 0x80, 0x20, true, 0xc3a6a6e5cb3968ab)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.DemotionCount", demotion_count, 0xa0, 0x20, true, 0xb37a8460ae903c70)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.ErrorCount", error_count, 0xc0, 0x20, true, 0x697ca8561ff3ae1c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.RetryCount", retry_count, 0xe0, 0x20, true, 0xd25f6422da93b5d4)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.CurrentFrequencyTime", current_frequency_time, 0x100, 0x40, true, 0x7f523c30e799f951)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.CurrentProcessorTime", current_processor_time, 0x140, 0x40, true, 0x6f6a27cf0f572edd)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.CurrentProcessorIdleTime", current_processor_idle_time, 0x180, 0x40, true, 0x77b21e71eeb26fde)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.LastProcessorTime", last_processor_time, 0x1c0, 0x40, true, 0x58dcb53b9b5577c9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.LastProcessorIdleTime", last_processor_idle_time, 0x200, 0x40, true, 0x68ae787fb12d5ed)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESSOR_POWER_INFORMATION.Energy", energy, 0x240, 0x40, true, 0x7524a8d52f44feb6)
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
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif