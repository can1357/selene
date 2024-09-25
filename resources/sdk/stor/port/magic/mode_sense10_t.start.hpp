#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SENSE10.OperationCode", operation_code, 0x0, 0x8, true, 0x2ce466ac1691ab21)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_SENSE10.Dbd", dbd, 0xb, 0x1, true, 0xd46ae22d2633c837, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_SENSE10.LongLBAAccepted", long_lba_accepted, 0xc, 0x1, true, 0x1ae17d63aab2d647, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_SENSE10.PageCode", page_code, 0x10, 0x6, true, 0x2739b8476d87a067, 6, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MODE_SENSE10.Pc", pc, 0x16, 0x2, true, 0x6467b4d1008aa840, 2, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SENSE10.SubPageCode", sub_page_code, 0x18, 0x8, true, 0x7d3dfce40b535882)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_SENSE10.AllocationLength", allocation_length, 0x38, 0x10, true, 0x5d4e60e7acd7154)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_SENSE10.Control", control, 0x48, 0x8, true, 0x63185768688dca90)
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