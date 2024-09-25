#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_POWER_STATE.SystemState", system_state, 0x0, 0x20, true, 0x15d5706fa8fe1d28)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_POWER_STATE.DeviceState", device_state, 0x0, 0x20, true, 0xaff33c7be4584867)
#else
#define _m00
#define _m01
#endif