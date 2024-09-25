#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_LOG_PARAMETER_HEADER.ParameterCode", parameter_code, 0x0, 0x10, true, 0x2684cef18dd0d2f0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOG_PARAMETER_HEADER.ControlByte", control_byte, 0x10, 0x8, true, 0xd272ed72f19328ac)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_LOG_PARAMETER_HEADER.FormatAndLinking", format_and_linking, 0x10, 0x2, true, 0xb3f7aae198ca2d9, 2, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_LOG_PARAMETER_HEADER.TMC", tmc, 0x12, 0x2, true, 0x18c847465d5f17c1, 2, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOG_PARAMETER_HEADER.ETC", etc, 0x14, 0x1, true, 0xe6068b7de62217bb, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOG_PARAMETER_HEADER.TSD", tsd, 0x15, 0x1, true, 0x5cc05c3f4760d4cb, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOG_PARAMETER_HEADER.Obsolete", obsolete, 0x16, 0x1, true, 0xc4eb15885a1dadd1, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOG_PARAMETER_HEADER.DU", du, 0x17, 0x1, true, 0x3f4450984f797d0f, 1, uint8_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOG_PARAMETER_HEADER.ParameterLength", parameter_length, 0x18, 0x8, true, 0x72268bcddc070711)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif