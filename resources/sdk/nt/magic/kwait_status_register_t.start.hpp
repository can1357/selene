#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KWAIT_STATUS_REGISTER.Flags", flags, 0x0, 0x8, true, 0x39ced0e6befe8298)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_KWAIT_STATUS_REGISTER.State", state, 0x0, 0x3, true, 0x3237a89fecc0b688, 3, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KWAIT_STATUS_REGISTER.Affinity", affinity, 0x3, 0x1, true, 0xafd71b127a5060e0, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KWAIT_STATUS_REGISTER.Priority", priority, 0x4, 0x1, true, 0xe3d641a376c004e3, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KWAIT_STATUS_REGISTER.Apc", apc, 0x5, 0x1, true, 0xcb47a7e044ece2eb, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KWAIT_STATUS_REGISTER.UserApc", user_apc, 0x6, 0x1, true, 0xa9d2a24077d5a0f6, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KWAIT_STATUS_REGISTER.Alert", alert, 0x7, 0x1, true, 0x6d28b4068fea3fc0, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif