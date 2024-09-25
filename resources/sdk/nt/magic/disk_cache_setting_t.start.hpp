#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_CACHE_SETTING.Version", version, 0x0, 0x20, true, 0x6a1274c92413ca34)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::disk_cache_state_t), "_DISK_CACHE_SETTING.State", state, 0x20, 0x20, true, 0x9bbbf389a4d1b224)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_CACHE_SETTING.IsPowerProtected", is_power_protected, 0x40, 0x8, true, 0x65556ad1b5a7417a)
#else
#define _m00
#define _m01
#define _m02
#endif