#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLXTR_READ_CDDA.OperationCode", operation_code, 0x0, 0x8, true, 0xab621d85c1b9f77f)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PLXTR_READ_CDDA.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x6ec861076890fa9b, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLXTR_READ_CDDA.LogicalBlockByte0", logical_block_byte0, 0x10, 0x8, true, 0x2237ed4257025e70)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLXTR_READ_CDDA.LogicalBlockByte1", logical_block_byte1, 0x18, 0x8, true, 0xe61846884745cbcf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLXTR_READ_CDDA.LogicalBlockByte2", logical_block_byte2, 0x20, 0x8, true, 0xdce7a0586770daac)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLXTR_READ_CDDA.LogicalBlockByte3", logical_block_byte3, 0x28, 0x8, true, 0x8ca4ed2d9aa33aba)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLXTR_READ_CDDA.TransferBlockByte0", transfer_block_byte0, 0x30, 0x8, true, 0x4bb286ff21d91d96)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLXTR_READ_CDDA.TransferBlockByte1", transfer_block_byte1, 0x38, 0x8, true, 0x72d7eb919967898f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLXTR_READ_CDDA.TransferBlockByte2", transfer_block_byte2, 0x40, 0x8, true, 0xf4c22998a29dd573)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLXTR_READ_CDDA.TransferBlockByte3", transfer_block_byte3, 0x48, 0x8, true, 0x15ebaca19ab8209c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLXTR_READ_CDDA.SubCode", sub_code, 0x50, 0x8, true, 0xa1844c6dcf48dabe)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLXTR_READ_CDDA.Control", control, 0x58, 0x8, true, 0x792bdf0aeb74d0e9)
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