#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_CURRENT_BROADCAST.InProgress", in_progress, 0x0, 0x8, true, 0xb120dc35994b1164)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::system_power_state_context_t), "_POP_CURRENT_BROADCAST.SystemContext", system_context, 0x20, 0x20, true, 0x565ec294da402e1e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::action_t), "_POP_CURRENT_BROADCAST.PowerAction", power_action, 0x40, 0x20, true, 0xf93ab7e728c2fb06)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::device_sys_state_t*), "_POP_CURRENT_BROADCAST.DeviceState", device_state, 0x80, 0x40, true, 0xe30c4adfb631088)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif