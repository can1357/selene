#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SET_POWER_SETTING_VALUE.Version", version, 0x0, 0x20, true, 0x2fbe6b566b9d1c1d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "SET_POWER_SETTING_VALUE.Guid", guid, 0x20, 0x80, true, 0x85f214bacf342489)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_condition_t), "SET_POWER_SETTING_VALUE.PowerCondition", power_condition, 0xa0, 0x20, true, 0xc1c2c55cac092474)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SET_POWER_SETTING_VALUE.DataLength", data_length, 0xc0, 0x20, true, 0xe708b349d067a6e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "SET_POWER_SETTING_VALUE.Data", data, 0xe0, 0x8, true, 0xe18f3772fa7243d6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif