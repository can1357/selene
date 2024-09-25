#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOGSELECT.OperationCode", operation_code, 0x0, 0x8, true, 0x2445ad407cdd4c78)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOGSELECT.SPBit", sp_bit, 0x8, 0x1, true, 0x9ecbae6f80238fd1, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOGSELECT.PCRBit", pcr_bit, 0x9, 0x1, true, 0x64f0eec0915cda8c, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_LOGSELECT.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x5dad3841786c59f4, 3, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_LOGSELECT.PCBit", pc_bit, 0x16, 0x2, true, 0x480f33ceba1f85ec, 2, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_LOGSELECT.ParameterListLength", parameter_list_length, 0x38, 0x10, true, 0x5d3a24dd671b6bd5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOGSELECT.Control", control, 0x48, 0x8, true, 0x936bada99467806a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif