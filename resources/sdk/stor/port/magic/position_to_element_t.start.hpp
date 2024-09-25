#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_POSITION_TO_ELEMENT.OperationCode", operation_code, 0x0, 0x8, true, 0x4050c81e4eefff0)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_POSITION_TO_ELEMENT.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x81fd48fe2b4f3214, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_POSITION_TO_ELEMENT.TransportElementAddress", transport_element_address, 0x10, 0x10, true, 0x8be8db2b747f19a4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_POSITION_TO_ELEMENT.DestinationElementAddress", destination_element_address, 0x20, 0x10, true, 0x9c27b5631e936483)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POSITION_TO_ELEMENT.Flip", flip, 0x40, 0x1, true, 0x6a7f3dcb8b98a157, 1, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_POSITION_TO_ELEMENT.Control", control, 0x48, 0x8, true, 0xeba6132de891ed90)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif