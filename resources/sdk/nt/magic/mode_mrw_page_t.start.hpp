#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_MRW_PAGE.PageCode", page_code, 0x0, 0x6, true, 0x877d1a86b29e93e7, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_MRW_PAGE.PageSavable", page_savable, 0x7, 0x1, true, 0x2ffebfdc8e78f57c, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_MRW_PAGE.PageLength", page_length, 0x8, 0x8, true, 0x6bf3a1f6f1a2bb32)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_MRW_PAGE.LbaSpace", lba_space, 0x18, 0x1, true, 0x365d410a45009ab, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif