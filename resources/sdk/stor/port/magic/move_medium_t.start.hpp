#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MOVE_MEDIUM.OperationCode", operation_code, 0x0, 0x8, true, 0x4b700d511cfa706)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MOVE_MEDIUM.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0xd627307ca8ea815b, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MOVE_MEDIUM.TransportElementAddress", transport_element_address, 0x10, 0x10, true, 0x1cbc8edb5f92deb3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MOVE_MEDIUM.SourceElementAddress", source_element_address, 0x20, 0x10, true, 0xa3c2d6e9ccdc15c6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MOVE_MEDIUM.DestinationElementAddress", destination_element_address, 0x30, 0x10, true, 0x62cd464c08fb6567)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MOVE_MEDIUM.Flip", flip, 0x50, 0x1, true, 0xb156500f27b2e55f, 1, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MOVE_MEDIUM.Control", control, 0x58, 0x8, true, 0xebe8ac1561c3d8be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif