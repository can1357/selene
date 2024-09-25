#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6READWRITE.OperationCode", operation_code, 0x0, 0x8, true, 0x67547bc3fdf09dfa)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_CDB6READWRITE.LogicalBlockMsb1", logical_block_msb1, 0x8, 0x5, true, 0x55a041413cabde19, 5, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDB6READWRITE.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0xfc77b74ac95c11ed, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6READWRITE.LogicalBlockMsb0", logical_block_msb0, 0x10, 0x8, true, 0xfb69cff1e721421e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6READWRITE.LogicalBlockLsb", logical_block_lsb, 0x18, 0x8, true, 0xab254666205d5d46)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6READWRITE.TransferBlocks", transfer_blocks, 0x20, 0x8, true, 0x28bd700f9da1f352)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6READWRITE.Control", control, 0x28, 0x8, true, 0x769f0cd610c79463)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif