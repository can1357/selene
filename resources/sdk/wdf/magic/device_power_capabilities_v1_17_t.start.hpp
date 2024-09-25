#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.Size", size, 0x0, 0x0, false, 0x248f6f7533d92030)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.DeviceD1", device_d1, 0x0, 0x0, false, 0x377eef4a292a9e05)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.DeviceD2", device_d2, 0x0, 0x0, false, 0x85e939734a72daed)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.WakeFromD0", wake_from_d0, 0x0, 0x0, false, 0x8af0faf608cacb8b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.WakeFromD1", wake_from_d1, 0x0, 0x0, false, 0xce597ea2b206a17)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.WakeFromD2", wake_from_d2, 0x0, 0x0, false, 0xba7d8f4440280c52)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.WakeFromD3", wake_from_d3, 0x0, 0x0, false, 0x13562d6dd6867c88)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.DeviceState", device_state, 0x0, 0x0, false, 0xf4ff1d723b9ad49b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.DeviceWake", device_wake, 0x0, 0x0, false, 0x351a7b9bdebfbaf9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.SystemWake", system_wake, 0x0, 0x0, false, 0x1340ad91a2849293)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.D1Latency", d1_latency, 0x0, 0x0, false, 0xe9ada0fcf6f6a076)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.D2Latency", d2_latency, 0x0, 0x0, false, 0x995c2fe30db786ad)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.D3Latency", d3_latency, 0x0, 0x0, false, 0x26127c2d775c8cba)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_17.IdealDxStateForSx", ideal_dx_state_for_sx, 0x0, 0x0, false, 0xb61c269cf6b63bed)
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
#endif