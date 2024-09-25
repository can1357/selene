#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ENERGY_STATE_DURATION.Value", value, 0x0, 0x40, true, 0x517be924b1c9aa5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENERGY_STATE_DURATION.LastChangeTime", last_change_time, 0x0, 0x20, true, 0xc2cb85dc95793d79)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_ENERGY_STATE_DURATION.Duration", duration, 0x20, 0x1f, true, 0x975edc61f414a76a, 31, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ENERGY_STATE_DURATION.IsInState", is_in_state, 0x3f, 0x1, true, 0x99d84bf4490990ac, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif