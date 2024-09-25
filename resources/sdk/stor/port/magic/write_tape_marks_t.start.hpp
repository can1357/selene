#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WRITE_TAPE_MARKS.OperationCode", operation_code, 0x0, 0x8, true, 0x2be5f148d7336712)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WRITE_TAPE_MARKS.Immediate", immediate, 0x8, 0x1, true, 0xbc97513b5256f9a, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WRITE_TAPE_MARKS.WriteSetMarks", write_set_marks, 0x9, 0x1, true, 0xa4aa4a96608cb34, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WRITE_TAPE_MARKS.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x9ae1223b0e9feeae, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_WRITE_TAPE_MARKS.TransferLength", transfer_length, 0x10, 0x18, true, 0xe5d0c56657f95e68)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WRITE_TAPE_MARKS.Control", control, 0x28, 0x8, true, 0xc933c6eb22b8c73)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif