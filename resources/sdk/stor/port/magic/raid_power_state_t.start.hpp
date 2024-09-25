#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_RAID_POWER_STATE.SystemState", system_state, 0x0, 0x20, true, 0xdfe25e2ff02125bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_RAID_POWER_STATE.DeviceState", device_state, 0x20, 0x20, true, 0xfe71cb52337a1843)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::action_t), "_RAID_POWER_STATE.PowerAction", power_action, 0x40, 0x20, true, 0x6985324f9cca8039)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_POWER_STATE.SystemPoweringDown", system_powering_down, 0x60, 0x8, true, 0xd22e898cf4b2c5da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif