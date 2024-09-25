#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.Size", size, 0x0, 0x0, false, 0xbb8e15e8ceecc91f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.DeviceD1", device_d1, 0x0, 0x0, false, 0x33a304137cb0c0e6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.DeviceD2", device_d2, 0x0, 0x0, false, 0x28f90f1559de5dc5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.WakeFromD0", wake_from_d0, 0x0, 0x0, false, 0x4ead8dd38ab17b18)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.WakeFromD1", wake_from_d1, 0x0, 0x0, false, 0xc8ffda28772619a8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.WakeFromD2", wake_from_d2, 0x0, 0x0, false, 0x8608e0a6bf483432)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.WakeFromD3", wake_from_d3, 0x0, 0x0, false, 0xff87d355e01ae03f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.DeviceState", device_state, 0x0, 0x0, false, 0xb425dabd837be6e6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.DeviceWake", device_wake, 0x0, 0x0, false, 0xb0958697fd9ed4b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.SystemWake", system_wake, 0x0, 0x0, false, 0x29566db68e5a87da)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.D1Latency", d1_latency, 0x0, 0x0, false, 0x7228d74b0603bd93)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.D2Latency", d2_latency, 0x0, 0x0, false, 0xbdc7778086695fd9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.D3Latency", d3_latency, 0x0, 0x0, false, 0xabb7fb99a4a00da9)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_7.IdealDxStateForSx", ideal_dx_state_for_sx, 0x0, 0x0, false, 0x5f1297d0c6a07ece)
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