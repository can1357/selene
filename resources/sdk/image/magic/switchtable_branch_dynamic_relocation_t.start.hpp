#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION.PageRelativeOffset", page_relative_offset, 0x0, 0xc, true, 0xb2e7b90ab80bc5bc, 12, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION.RegisterNumber", register_number, 0xc, 0x4, true, 0xc002556f6b3cbed7, 4, uint16_t)
#else
#define _m00
#define _m01
#endif