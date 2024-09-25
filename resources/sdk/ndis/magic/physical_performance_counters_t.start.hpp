#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PHYSICAL_PERFORMANCE_COUNTERS.DevicePowerState", device_power_state, 0x0, 0x20, true, 0x6eccce782d4d8e3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PHYSICAL_PERFORMANCE_COUNTERS.TimeSuspended100ns", time_suspended100ns, 0x40, 0x40, true, 0xfae0c347ad5c890a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PHYSICAL_PERFORMANCE_COUNTERS.Uptime100ns", uptime100ns, 0x80, 0x40, true, 0x934aabc5f084dc5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PHYSICAL_PERFORMANCE_COUNTERS.LowPowerTransitions", low_power_transitions, 0xc0, 0x20, true, 0x52cebd9a6c208262)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif