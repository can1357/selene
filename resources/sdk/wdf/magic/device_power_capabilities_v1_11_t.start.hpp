#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.Size", size, 0x0, 0x0, false, 0x99ed32d778896746)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.DeviceD1", device_d1, 0x0, 0x0, false, 0xd2f47dbc0a634329)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.DeviceD2", device_d2, 0x0, 0x0, false, 0x3f563ca48b4c53c5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.WakeFromD0", wake_from_d0, 0x0, 0x0, false, 0xc3ff59649b34e5a1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.WakeFromD1", wake_from_d1, 0x0, 0x0, false, 0xb3955ae83d257380)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.WakeFromD2", wake_from_d2, 0x0, 0x0, false, 0x518e6998864fbc11)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.WakeFromD3", wake_from_d3, 0x0, 0x0, false, 0x6f96ea9d708311f0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.DeviceState", device_state, 0x0, 0x0, false, 0xd83259dd8083fb69)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.DeviceWake", device_wake, 0x0, 0x0, false, 0x637b17629e0e1728)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.SystemWake", system_wake, 0x0, 0x0, false, 0xf4dc125a46e67a21)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.D1Latency", d1_latency, 0x0, 0x0, false, 0xe98ca6f1e223d56)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.D2Latency", d2_latency, 0x0, 0x0, false, 0x6989d3e2556f71a3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.D3Latency", d3_latency, 0x0, 0x0, false, 0x37a114c06432d011)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_11.IdealDxStateForSx", ideal_dx_state_for_sx, 0x0, 0x0, false, 0x6dd615fb1b9f6447)
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