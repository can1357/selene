#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEEK_BLOCK.OperationCode", operation_code, 0x0, 0x8, true, 0x26f6c849bbc9ccaf)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEEK_BLOCK.Immediate", immediate, 0x8, 0x1, true, 0xce96dfc6fd21f488, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_SEEK_BLOCK.BlockAddress", block_address, 0x10, 0x18, true, 0x980d7b464addee8d)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEEK_BLOCK.Link", link, 0x28, 0x1, true, 0xa62431c7b68b1459, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEEK_BLOCK.Flag", flag, 0x29, 0x1, true, 0xbd59289aa911ac29, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_SEEK_BLOCK.VendorUnique", vendor_unique, 0x2e, 0x2, true, 0xa579e2b9b21934dc, 2, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif