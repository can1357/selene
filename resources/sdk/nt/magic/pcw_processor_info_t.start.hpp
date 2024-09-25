#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.IdleTime", idle_time, 0x0, 0x40, true, 0xe57317b4fc002ade)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.AvailableTime", available_time, 0x40, 0x40, true, 0x710d27bc17dcde)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.UserTime", user_time, 0x80, 0x40, true, 0x309d0dd5f78f04f0)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.KernelTime", kernel_time, 0xc0, 0x40, true, 0xa0d33f5e5c8cdc83)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.Interrupts", interrupts, 0x100, 0x20, true, 0x1907a14b95def12)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.DpcTime", dpc_time, 0x140, 0x40, true, 0x8f7b4cb12c341d15)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.InterruptTime", interrupt_time, 0x180, 0x40, true, 0xae9500c5b6fe8064)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.ClockInterrupts", clock_interrupts, 0x1c0, 0x20, true, 0x67fc42cd119e4697)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.DpcCount", dpc_count, 0x1e0, 0x20, true, 0x75d04a1d5647986)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.DpcRate", dpc_rate, 0x200, 0x20, true, 0x13015093458fbadd)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.C1Time", c1_time, 0x240, 0x40, true, 0x3606070da290a62c)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.C2Time", c2_time, 0x280, 0x40, true, 0x3d3161b80d2bfe77)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.C3Time", c3_time, 0x2c0, 0x40, true, 0x2e911c0bc0804d77)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.C1Transitions", c1_transitions, 0x300, 0x40, true, 0xcc5c41ca95874e19)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.C2Transitions", c2_transitions, 0x340, 0x40, true, 0x155e0e6e65aca2fd)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.C3Transitions", c3_transitions, 0x380, 0x40, true, 0xd1a7e22384fc6dc)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.StallTime", stall_time, 0x3c0, 0x40, true, 0x6682bf5316763864)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.ParkingStatus", parking_status, 0x400, 0x20, true, 0xf1eaf67ba749a7fd)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.CurrentFrequency", current_frequency, 0x420, 0x20, true, 0x6797589ca32f69fa)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.PercentMaxFrequency", percent_max_frequency, 0x440, 0x20, true, 0xceeb32c3a3b76f3e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.StateFlags", state_flags, 0x460, 0x20, true, 0xe4b889748655e30b)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.NominalThroughput", nominal_throughput, 0x480, 0x20, true, 0xd3180ff657627bd1)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.ActiveThroughput", active_throughput, 0x4a0, 0x20, true, 0x89dc91524c48fb5d)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.ScaledThroughput", scaled_throughput, 0x4c0, 0x40, true, 0x95bea6da29800a23)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.ScaledKernelThroughput", scaled_kernel_throughput, 0x500, 0x40, true, 0xd76a1170d6d83826)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.AverageIdleTime", average_idle_time, 0x540, 0x40, true, 0x22af6572bcdba312)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.IdleBreakEvents", idle_break_events, 0x580, 0x40, true, 0x22e517d602670939)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.PerformanceLimit", performance_limit, 0x5c0, 0x20, true, 0x602cb75251eeb71)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_PROCESSOR_INFO.PerformanceLimitFlags", performance_limit_flags, 0x5e0, 0x20, true, 0x4168b762cf1e5869)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_PROCESSOR_INFO.ScaledFrequency", scaled_frequency, 0x600, 0x40, true, 0xeb050e12bd1723ef)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#endif