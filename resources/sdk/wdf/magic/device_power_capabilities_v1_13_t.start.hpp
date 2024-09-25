#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.Size", size, 0x0, 0x0, false, 0x335faced39ee09f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.DeviceD1", device_d1, 0x0, 0x0, false, 0x11dac4e96fa03fec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.DeviceD2", device_d2, 0x0, 0x0, false, 0x83626bf69c3cb294)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.WakeFromD0", wake_from_d0, 0x0, 0x0, false, 0x36c559ee7efa90e8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.WakeFromD1", wake_from_d1, 0x0, 0x0, false, 0xbbc327a12e5738c9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.WakeFromD2", wake_from_d2, 0x0, 0x0, false, 0xb0cf40d5c3f0c2a5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.WakeFromD3", wake_from_d3, 0x0, 0x0, false, 0x48353585bb7ce5b9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.DeviceState", device_state, 0x0, 0x0, false, 0x96efe6f6a3402751)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.DeviceWake", device_wake, 0x0, 0x0, false, 0x269d67bf17c38e63)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.SystemWake", system_wake, 0x0, 0x0, false, 0x3e1c31e152b97ee4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.D1Latency", d1_latency, 0x0, 0x0, false, 0xa68f6bd5881b04f8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.D2Latency", d2_latency, 0x0, 0x0, false, 0xa79bcc32b292d78e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.D3Latency", d3_latency, 0x0, 0x0, false, 0x83fb2529132b762f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES_V1_13.IdealDxStateForSx", ideal_dx_state_for_sx, 0x0, 0x0, false, 0xd1c42839713f75db)
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