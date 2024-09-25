#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES.Size", size, 0x0, 0x20, true, 0xc0248794a85761cb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES.DeviceD1", device_d1, 0x20, 0x20, true, 0xb0087faa945c7adf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES.DeviceD2", device_d2, 0x40, 0x20, true, 0x23a18279f9a7bb99)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES.WakeFromD0", wake_from_d0, 0x60, 0x20, true, 0x989dd43c8b4d9f2b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES.WakeFromD1", wake_from_d1, 0x80, 0x20, true, 0x98ee3812c303ad4e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES.WakeFromD2", wake_from_d2, 0xa0, 0x20, true, 0xa90ec2b8fa9cdcfd)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_CAPABILITIES.WakeFromD3", wake_from_d3, 0xc0, 0x20, true, 0xab00c716f2623bc3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_power_state_t, 7>), "_WDF_DEVICE_POWER_CAPABILITIES.DeviceState", device_state, 0xe0, 0xe0, true, 0xcf63e3ab01997ce5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES.DeviceWake", device_wake, 0x1c0, 0x20, true, 0xe1d159ae12082024)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES.SystemWake", system_wake, 0x1e0, 0x20, true, 0xe8f352846022c469)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES.D1Latency", d1_latency, 0x200, 0x20, true, 0xbbe40e33c88cc87)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES.D2Latency", d2_latency, 0x220, 0x20, true, 0xa75d240507e92ab1)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_CAPABILITIES.D3Latency", d3_latency, 0x240, 0x20, true, 0x5216fe1bebbaf02f)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_CAPABILITIES.IdealDxStateForSx", ideal_dx_state_for_sx, 0x260, 0x20, true, 0x7abbe3e1165698d5)
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