#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6INQUIRY.OperationCode", operation_code, 0x0, 0x8, true, 0xa8c21c7e23ce5aee)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDB6INQUIRY.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x116602fb543bb3fa, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6INQUIRY.PageCode", page_code, 0x10, 0x8, true, 0xe0738418075e75f7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6INQUIRY.IReserved", i_reserved, 0x18, 0x8, true, 0xb48d8e522976cd80)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6INQUIRY.AllocationLength", allocation_length, 0x20, 0x8, true, 0x3d7f169f0cf6fb66)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6INQUIRY.Control", control, 0x28, 0x8, true, 0x406d9c3c933337a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif