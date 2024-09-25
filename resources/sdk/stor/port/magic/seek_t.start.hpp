#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEEK.OperationCode", operation_code, 0x0, 0x8, true, 0x4dcc1229b107dfb)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SEEK.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x4d1673d33a91d9b9, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SEEK.LogicalBlockAddress", logical_block_address, 0x10, 0x20, true, 0x3df64112b5e54e40)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEEK.Control", control, 0x48, 0x8, true, 0x65554749bf2149d6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif