#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.Size", size, 0x0, 0x0, false, 0xa77db9000c52e54d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.DeviceD1", device_d1, 0x0, 0x0, false, 0x3ee8b9137458d136)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.DeviceD2", device_d2, 0x0, 0x0, false, 0x93a1aee60368e4e4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.WakeFromD0", wake_from_d0, 0x0, 0x0, false, 0x928f91e66b340a6b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.WakeFromD1", wake_from_d1, 0x0, 0x0, false, 0x93993b837551b36b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.WakeFromD2", wake_from_d2, 0x0, 0x0, false, 0x3bad2d19d76d9334)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.WakeFromD3", wake_from_d3, 0x0, 0x0, false, 0x71ff8ba685a42a64)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.DeviceState", device_state, 0x0, 0x0, false, 0x703b9c75e0a06c58)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.DeviceWake", device_wake, 0x0, 0x0, false, 0x6a01b70eaf5d05f3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.SystemWake", system_wake, 0x0, 0x0, false, 0x4a13a00baf887806)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.D1Latency", d1_latency, 0x0, 0x0, false, 0x5eb0cbc9ebc9bf7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.D2Latency", d2_latency, 0x0, 0x0, false, 0xcf4c1e9309cc80c3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.D3Latency", d3_latency, 0x0, 0x0, false, 0x8c746e9b50505c6c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_0.IdealDxStateForSx", ideal_dx_state_for_sx, 0x0, 0x0, false, 0xa703c129cbce479e)
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