#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNWIND_CODE.CodeOffset", code_offset, 0x0, 0x8, true, 0x60d9978906bca946)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_UNWIND_CODE.UnwindOp", unwind_op, 0x8, 0x4, true, 0xa3a0deb2f3850ca7, 4, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_UNWIND_CODE.OpInfo", op_info, 0xc, 0x4, true, 0xc68c7379cf4312bc, 4, uint8_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNWIND_CODE.EpilogueCode.OffsetLow", offset_low, 0x0, 0x8, true, 0xb490d2d09207cf1)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_UNWIND_CODE.EpilogueCode.UnwindOp", unwind_op, 0x8, 0x4, true, 0x23488b6566810710, 4, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_UNWIND_CODE.EpilogueCode.OffsetHigh", offset_high, 0xc, 0x4, true, 0x6b56d3ff6ab9eb33, 4, uint8_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_epilogue_code_t), "_UNWIND_CODE.EpilogueCode", epilogue_code, 0x0, 0x10, true, 0x92599488103e4c2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_UNWIND_CODE.FrameOffset", frame_offset, 0x0, 0x10, true, 0x8a1b3085ee2460d6)
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