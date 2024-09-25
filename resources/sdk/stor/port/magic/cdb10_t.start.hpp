#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB10.OperationCode", operation_code, 0x0, 0x8, true, 0x8576a5b32f8601d0)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB10.RelativeAddress", relative_address, 0x8, 0x1, true, 0xa5d4de75369e7b84, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB10.ForceUnitAccess", force_unit_access, 0xb, 0x1, true, 0x6edb83014e3329ba, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB10.DisablePageOut", disable_page_out, 0xc, 0x1, true, 0x4abb175321c5d258, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDB10.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x641caf873d2b38e2, 3, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB10.LogicalBlockByte0", logical_block_byte0, 0x10, 0x8, true, 0x29d4415b0011b73d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB10.LogicalBlockByte1", logical_block_byte1, 0x18, 0x8, true, 0xae61e985ab66fd61)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB10.LogicalBlockByte2", logical_block_byte2, 0x20, 0x8, true, 0x94939557f025f62)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB10.LogicalBlockByte3", logical_block_byte3, 0x28, 0x8, true, 0xd4061b8009a8846c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB10.TransferBlocksMsb", transfer_blocks_msb, 0x38, 0x8, true, 0xb7b6ca5b367fbcf7)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB10.TransferBlocksLsb", transfer_blocks_lsb, 0x40, 0x8, true, 0xe29057edc9afd75)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB10.Control", control, 0x48, 0x8, true, 0x2cc9c2f6bc458a16)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif