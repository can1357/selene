#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_SET_POWER_ACTION.Trigger", trigger, 0x0, 0x40, true, 0x34e1153062be07e0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SET_POWER_ACTION.PowerAction", power_action, 0x40, 0x20, true, 0xcab8d82bad0f7651)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SET_POWER_ACTION.LightestState", lightest_state, 0x60, 0x20, true, 0xbc5c28f00bbb9a46)
#else
#define _m00
#define _m01
#define _m02
#endif