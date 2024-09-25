#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_POWER_CONDITION_PAGE.PageCode", page_code, 0x0, 0x6, true, 0x19e943de91ad5bbf, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POWER_CONDITION_PAGE.PSBit", ps_bit, 0x7, 0x1, true, 0x52ccfd679dcec58f, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_POWER_CONDITION_PAGE.PageLength", page_length, 0x8, 0x8, true, 0x5f492143c3cd1b9f)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POWER_CONDITION_PAGE.Standby", standby, 0x18, 0x1, true, 0xcca36e6d276e11bd, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POWER_CONDITION_PAGE.Idle", idle, 0x19, 0x1, true, 0xc369d87d6415f9b3, 1, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_POWER_CONDITION_PAGE.IdleTimer", idle_timer, 0x20, 0x20, true, 0xab67e28a2fb0b677)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_POWER_CONDITION_PAGE.StandbyTimer", standby_timer, 0x40, 0x20, true, 0xb511cf60c4e11162)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif