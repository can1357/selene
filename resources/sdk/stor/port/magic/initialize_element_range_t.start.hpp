#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_INITIALIZE_ELEMENT_RANGE.OperationCode", operation_code, 0x0, 0x8, true, 0x1c2111b1933052fc)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INITIALIZE_ELEMENT_RANGE.Range", range, 0x8, 0x1, true, 0xf47a7b70788bccb0, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_INITIALIZE_ELEMENT_RANGE.LogicalUnitNubmer", logical_unit_nubmer, 0xd, 0x3, true, 0x7cf69ef34b97edc1, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_INITIALIZE_ELEMENT_RANGE.FirstElementAddress", first_element_address, 0x10, 0x10, true, 0xa333f7474270fc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_INITIALIZE_ELEMENT_RANGE.NumberOfElements", number_of_elements, 0x30, 0x10, true, 0x56317243fdafb781)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INITIALIZE_ELEMENT_RANGE.NoBarCode", no_bar_code, 0x4f, 0x1, true, 0x357a1b9f316807f7, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif