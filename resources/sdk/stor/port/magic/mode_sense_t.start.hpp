#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SENSE.OperationCode", operation_code, 0x0, 0x8, true, 0x6cec40c00abf0d37)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_SENSE.Dbd", dbd, 0xb, 0x1, true, 0x405e79e9ef1dc096, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_SENSE.PageCode", page_code, 0x10, 0x6, true, 0x12846e6533ba93b6, 6, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MODE_SENSE.Pc", pc, 0x16, 0x2, true, 0x51c711f2b659af30, 2, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SENSE.SubPageCode", sub_page_code, 0x18, 0x8, true, 0x7d1d887c904877b2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SENSE.AllocationLength", allocation_length, 0x20, 0x8, true, 0x9e35855e57b0efd4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SENSE.Control", control, 0x28, 0x8, true, 0x503f0297a3094206)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif