#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.Size", size, 0x0, 0x0, false, 0x26c7984110561df9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.DeviceD1", device_d1, 0x0, 0x0, false, 0xef760b7bc59edfd7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.DeviceD2", device_d2, 0x0, 0x0, false, 0xf0358b0df471a575)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.WakeFromD0", wake_from_d0, 0x0, 0x0, false, 0xd9d65b69c5dcbddd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.WakeFromD1", wake_from_d1, 0x0, 0x0, false, 0xc8997d7b6e42233f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.WakeFromD2", wake_from_d2, 0x0, 0x0, false, 0x522d27ca1b427bb8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.WakeFromD3", wake_from_d3, 0x0, 0x0, false, 0x51227e80a7a93d4e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.DeviceState", device_state, 0x0, 0x0, false, 0x2c11504c4ea70e30)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.DeviceWake", device_wake, 0x0, 0x0, false, 0x88afced53ade0321)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.SystemWake", system_wake, 0x0, 0x0, false, 0x507da27c1b5c9e89)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.D1Latency", d1_latency, 0x0, 0x0, false, 0x9e02fc95394316ad)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.D2Latency", d2_latency, 0x0, 0x0, false, 0xd9164c23e47f2d83)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.D3Latency", d3_latency, 0x0, 0x0, false, 0xedc90ea75fccf264)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_9.IdealDxStateForSx", ideal_dx_state_for_sx, 0x0, 0x0, false, 0x56aaca0fd80a890f)
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