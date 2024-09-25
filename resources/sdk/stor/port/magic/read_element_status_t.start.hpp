#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_ELEMENT_STATUS.OperationCode", operation_code, 0x0, 0x8, true, 0x3ae9a53ed6036f75)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_READ_ELEMENT_STATUS.ElementType", element_type, 0x8, 0x4, true, 0xf9ce13d884932c18, 4, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_ELEMENT_STATUS.VolTag", vol_tag, 0xc, 0x1, true, 0x3cf9c134a3b19154, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_ELEMENT_STATUS.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x6b59eaa692040439, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_ELEMENT_STATUS.StartingElementAddress", starting_element_address, 0x10, 0x10, true, 0x255fb8e8d794a078)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_ELEMENT_STATUS.NumberOfElements", number_of_elements, 0x20, 0x10, true, 0x7f4a5090f2973725)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_READ_ELEMENT_STATUS.AllocationLength", allocation_length, 0x38, 0x18, true, 0xdebe0a7656c6d0cf)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_ELEMENT_STATUS.Control", control, 0x58, 0x8, true, 0x8b2f75772fbcb29f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif