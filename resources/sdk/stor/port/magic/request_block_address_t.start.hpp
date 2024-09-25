#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REQUEST_BLOCK_ADDRESS.OperationCode", operation_code, 0x0, 0x8, true, 0x877fbe34b899f756)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REQUEST_BLOCK_ADDRESS.AllocationLength", allocation_length, 0x20, 0x8, true, 0x3926b82c96942dd6)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_REQUEST_BLOCK_ADDRESS.Link", link, 0x28, 0x1, true, 0x52aa0b3598a08aca, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_REQUEST_BLOCK_ADDRESS.Flag", flag, 0x29, 0x1, true, 0x8d2a51b89f3e8745, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_REQUEST_BLOCK_ADDRESS.VendorUnique", vendor_unique, 0x2e, 0x2, true, 0xe52ebbb2d074b31e, 2, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif