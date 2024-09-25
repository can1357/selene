#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SELECT10.OperationCode", operation_code, 0x0, 0x8, true, 0xced468817c54c39a)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_SELECT10.SPBit", sp_bit, 0x8, 0x1, true, 0xfb3c8a5c522106a1, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_SELECT10.PFBit", pf_bit, 0xc, 0x1, true, 0x9c537ac1e86f3454, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MODE_SELECT10.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x188ef83b1769a63a, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_SELECT10.ParameterListLength", parameter_list_length, 0x38, 0x10, true, 0x5af32b916a83ff25)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SELECT10.Control", control, 0x48, 0x8, true, 0x6c994485c3cc543)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif