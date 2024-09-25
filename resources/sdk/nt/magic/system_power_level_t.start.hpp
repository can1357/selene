#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_POWER_LEVEL.Enable", enable, 0x0, 0x8, true, 0xa1ee778cba41f4ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SYSTEM_POWER_LEVEL.BatteryLevel", battery_level, 0x20, 0x20, true, 0xe58a4c1dc1438bfb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct power::action_policy_t), "SYSTEM_POWER_LEVEL.PowerPolicy", power_policy, 0x40, 0x60, true, 0xf6ddfb5666cd30e7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "SYSTEM_POWER_LEVEL.MinSystemState", min_system_state, 0xa0, 0x20, true, 0x9db36432b72285f4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif