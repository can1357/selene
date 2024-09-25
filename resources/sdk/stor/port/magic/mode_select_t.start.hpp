#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SELECT.OperationCode", operation_code, 0x0, 0x8, true, 0xa06c4f840a26f3ff)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_SELECT.SPBit", sp_bit, 0x8, 0x1, true, 0x1b8c4f7e2c7e689d, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_SELECT.PFBit", pf_bit, 0xc, 0x1, true, 0x4f47af72280c42b7, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MODE_SELECT.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x4fcaa6afabddb7b7, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SELECT.ParameterListLength", parameter_list_length, 0x20, 0x8, true, 0xd5191cb2e8b8219a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SELECT.Control", control, 0x28, 0x8, true, 0xdebd712cb633c660)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif