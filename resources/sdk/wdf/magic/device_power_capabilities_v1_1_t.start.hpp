#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.Size", size, 0x0, 0x0, false, 0x17827afcced93e36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.DeviceD1", device_d1, 0x0, 0x0, false, 0xd45165456fcd4671)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.DeviceD2", device_d2, 0x0, 0x0, false, 0xe49af7897132f5c4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.WakeFromD0", wake_from_d0, 0x0, 0x0, false, 0x84f50054f0a9d8e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.WakeFromD1", wake_from_d1, 0x0, 0x0, false, 0xd298f27a2cabe7ef)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.WakeFromD2", wake_from_d2, 0x0, 0x0, false, 0xe0de426c5a784bed)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.WakeFromD3", wake_from_d3, 0x0, 0x0, false, 0x6b8df3b489293e2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.DeviceState", device_state, 0x0, 0x0, false, 0xf9ba0aba37d5adad)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.DeviceWake", device_wake, 0x0, 0x0, false, 0xe949ee4b1cd17ea7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.SystemWake", system_wake, 0x0, 0x0, false, 0x8b6c52c62f89d7f0)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.D1Latency", d1_latency, 0x0, 0x0, false, 0xf7ff2dfc3654ad2d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.D2Latency", d2_latency, 0x0, 0x0, false, 0x1841afc408c7c842)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.D3Latency", d3_latency, 0x0, 0x0, false, 0xfd8c0947dd76c80a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.IdealDxStateForSx", ideal_dx_state_for_sx, 0x0, 0x0, false, 0x1e27cdb24112fb2)
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