#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SPACE_TAPE_MARKS.OperationCode", operation_code, 0x0, 0x8, true, 0xc0561b6bfab1149f)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SPACE_TAPE_MARKS.Code", code, 0x8, 0x3, true, 0x21ac84d6fb5d8274, 3, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SPACE_TAPE_MARKS.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0xede05ea3b3df9488, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SPACE_TAPE_MARKS.NumMarksMSB", num_marks_msb, 0x10, 0x8, true, 0xd1a8f89469d1ad57)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SPACE_TAPE_MARKS.NumMarks", num_marks, 0x18, 0x8, true, 0x7db9a234dd566441)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SPACE_TAPE_MARKS.NumMarksLSB", num_marks_lsb, 0x20, 0x8, true, 0x523fc655ea7a64d6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SPACE_TAPE_MARKS.Byte6.value", value, 0x0, 0x8, true, 0x3abc147c5b77de9e)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SPACE_TAPE_MARKS.Byte6.Fields.Link", link, 0x0, 0x1, true, 0x675af02c07f78c98, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SPACE_TAPE_MARKS.Byte6.Fields.Flag", flag, 0x1, 0x1, true, 0x6f1ed52e710e3910, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_SPACE_TAPE_MARKS.Byte6.Fields.VendorUnique", vendor_unique, 0x6, 0x2, true, 0x77624d01d5451eac, 2, uint8_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_fields_t), "_SPACE_TAPE_MARKS.Byte6.Fields", fields, 0x0, 0x8, true, 0xd98f3693f52cf4a0)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_byte6_t), "_SPACE_TAPE_MARKS.Byte6", byte6, 0x28, 0x8, true, 0x2bb3d8e1332f0073)
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