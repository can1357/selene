#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NEC_READ_CDDA.OperationCode", operation_code, 0x0, 0x8, true, 0xa63542be25d754a2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NEC_READ_CDDA.LogicalBlockByte0", logical_block_byte0, 0x10, 0x8, true, 0x11c71b5dc31598c4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NEC_READ_CDDA.LogicalBlockByte1", logical_block_byte1, 0x18, 0x8, true, 0x91e0c11d80429ece)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NEC_READ_CDDA.LogicalBlockByte2", logical_block_byte2, 0x20, 0x8, true, 0x7b4ae6afb67d4b81)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NEC_READ_CDDA.LogicalBlockByte3", logical_block_byte3, 0x28, 0x8, true, 0x1c8017190e63a6e6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NEC_READ_CDDA.TransferBlockByte0", transfer_block_byte0, 0x38, 0x8, true, 0xc33709067486579a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NEC_READ_CDDA.TransferBlockByte1", transfer_block_byte1, 0x40, 0x8, true, 0x51b779d2d32fe2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NEC_READ_CDDA.Control", control, 0x48, 0x8, true, 0x358295353ac5675c)
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