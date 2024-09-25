#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REQUEST_VOLUME_ELEMENT_ADDRESS.OperationCode", operation_code, 0x0, 0x8, true, 0x525d108fba4208af)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_REQUEST_VOLUME_ELEMENT_ADDRESS.ElementType", element_type, 0x8, 0x4, true, 0x9324605812b5262f, 4, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_REQUEST_VOLUME_ELEMENT_ADDRESS.VolTag", vol_tag, 0xc, 0x1, true, 0x5c6bf9ccdec05e48, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_REQUEST_VOLUME_ELEMENT_ADDRESS.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x9254c55a66b29a82, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_REQUEST_VOLUME_ELEMENT_ADDRESS.StartingElementAddress", starting_element_address, 0x10, 0x10, true, 0x21477de4611505e7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_REQUEST_VOLUME_ELEMENT_ADDRESS.NumberElements", number_elements, 0x20, 0x10, true, 0x6045737f90e2a91a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_REQUEST_VOLUME_ELEMENT_ADDRESS.AllocationLength", allocation_length, 0x38, 0x18, true, 0x38f7677686d7d102)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REQUEST_VOLUME_ELEMENT_ADDRESS.Control", control, 0x58, 0x8, true, 0xb1c5c3c680c0ab26)
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