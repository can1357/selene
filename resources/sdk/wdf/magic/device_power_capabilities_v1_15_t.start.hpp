#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.Size", size, 0x0, 0x0, false, 0xaacd128d0ec303f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.DeviceD1", device_d1, 0x0, 0x0, false, 0xf26d3eec83f8e5e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.DeviceD2", device_d2, 0x0, 0x0, false, 0x54d261dfbf33e515)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.WakeFromD0", wake_from_d0, 0x0, 0x0, false, 0x3ad4a2c4a989a967)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.WakeFromD1", wake_from_d1, 0x0, 0x0, false, 0x7021e39e24c02078)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.WakeFromD2", wake_from_d2, 0x0, 0x0, false, 0xd91c261bacca0bbe)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.WakeFromD3", wake_from_d3, 0x0, 0x0, false, 0x1bb14c7a2cbf657b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.DeviceState", device_state, 0x0, 0x0, false, 0x8aeec72246b8aca2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.DeviceWake", device_wake, 0x0, 0x0, false, 0xd2b5209f1d0fe898)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.SystemWake", system_wake, 0x0, 0x0, false, 0x808af3dfa4517edc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.D1Latency", d1_latency, 0x0, 0x0, false, 0xbd8e62ceea0b69e5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.D2Latency", d2_latency, 0x0, 0x0, false, 0xd53e31420cbea61c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.D3Latency", d3_latency, 0x0, 0x0, false, 0x1fb2b99cddd14f86)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_15.IdealDxStateForSx", ideal_dx_state_for_sx, 0x0, 0x0, false, 0xc745982a1e0d27f3)
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