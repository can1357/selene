#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.Size", size, 0x0, 0x0, false, 0x4a0aeedce87c6f66)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.DeviceD1", device_d1, 0x0, 0x0, false, 0x1fc00a44ce3af3fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.DeviceD2", device_d2, 0x0, 0x0, false, 0xb6828196d9e0e8f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.WakeFromD0", wake_from_d0, 0x0, 0x0, false, 0x6dcb8a52f0fa6837)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.WakeFromD1", wake_from_d1, 0x0, 0x0, false, 0x17ce220a47de6936)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.WakeFromD2", wake_from_d2, 0x0, 0x0, false, 0xf0d758b86a825e93)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.WakeFromD3", wake_from_d3, 0x0, 0x0, false, 0x9551d588d8c8bde8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.DeviceState", device_state, 0x0, 0x0, false, 0x38b11bf10323c97c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.DeviceWake", device_wake, 0x0, 0x0, false, 0xe4c4164455f4f78e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.SystemWake", system_wake, 0x0, 0x0, false, 0x2301fc922c4bd01a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.D1Latency", d1_latency, 0x0, 0x0, false, 0x61671123ff7d386e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.D2Latency", d2_latency, 0x0, 0x0, false, 0x8c78b4d26c6f9869)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.D3Latency", d3_latency, 0x0, 0x0, false, 0x1ac12734149f1a47)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_5.IdealDxStateForSx", ideal_dx_state_for_sx, 0x0, 0x0, false, 0x9a6f4393a1699bc1)
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