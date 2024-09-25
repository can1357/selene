#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_VOLUME_TAG.OperationCode", operation_code, 0x0, 0x8, true, 0x8ad19604e680f008)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SEND_VOLUME_TAG.ElementType", element_type, 0x8, 0x4, true, 0x2bb72e6d8192cddf, 4, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SEND_VOLUME_TAG.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x18618e672d5e5d06, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SEND_VOLUME_TAG.StartingElementAddress", starting_element_address, 0x10, 0x10, true, 0x11c667164c8e3797)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_SEND_VOLUME_TAG.ActionCode", action_code, 0x28, 0x5, true, 0x13be3eae1c30a0a, 5, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SEND_VOLUME_TAG.ParameterListLength", parameter_list_length, 0x40, 0x10, true, 0xc28279a522775c3e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_VOLUME_TAG.Control", control, 0x58, 0x8, true, 0x4043e537b5cb08b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif