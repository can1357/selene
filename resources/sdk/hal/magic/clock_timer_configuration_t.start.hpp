#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HAL_CLOCK_TIMER_CONFIGURATION.Flags", flags, 0x0, 0x8, true, 0xb1a2dc2bf7302bfa)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAL_CLOCK_TIMER_CONFIGURATION.AlwaysOnTimer", always_on_timer, 0x0, 0x1, true, 0x395472b9e3850370, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAL_CLOCK_TIMER_CONFIGURATION.HighLatency", high_latency, 0x1, 0x1, true, 0xa85fd200d35e7d51, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAL_CLOCK_TIMER_CONFIGURATION.PerCpuTimer", per_cpu_timer, 0x2, 0x1, true, 0x45f05793c7db6580, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAL_CLOCK_TIMER_CONFIGURATION.DynamicTickSupported", dynamic_tick_supported, 0x3, 0x1, true, 0x925624a9847231be, 1, uint8_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_CLOCK_TIMER_CONFIGURATION.KnownType", known_type, 0x20, 0x20, true, 0xdc4d2933892e61c5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_CLOCK_TIMER_CONFIGURATION.Capabilities", capabilities, 0x40, 0x20, true, 0xd5851f400ee3bfbd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HAL_CLOCK_TIMER_CONFIGURATION.MaxIncrement", max_increment, 0x80, 0x40, true, 0xcd35a824af2b7ec3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_CLOCK_TIMER_CONFIGURATION.MinIncrement", min_increment, 0xc0, 0x20, true, 0x5b0d366bf5164ab2)
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