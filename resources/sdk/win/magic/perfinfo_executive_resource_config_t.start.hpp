#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_EXECUTIVE_RESOURCE_CONFIG.ReleaseSamplingRate", release_sampling_rate, 0x0, 0x20, true, 0xcb131d05813abbc1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_EXECUTIVE_RESOURCE_CONFIG.ContentionSamplingRate", contention_sampling_rate, 0x20, 0x20, true, 0xf097330e0da695ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_EXECUTIVE_RESOURCE_CONFIG.NumberOfExcessiveTimeouts", number_of_excessive_timeouts, 0x40, 0x20, true, 0xddb72173f7b58a95)
#else
#define _m00
#define _m01
#define _m02
#endif