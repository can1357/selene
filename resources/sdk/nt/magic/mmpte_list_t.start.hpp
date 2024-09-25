#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_LIST.Valid", valid, 0x0, 0x1, true, 0x9dc5fdefe79630a8, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_LIST.OneEntry", one_entry, 0x1, 0x1, true, 0xf6daa906f68ccdfd, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MMPTE_LIST.filler0", filler0, 0x2, 0x2, true, 0x36769c5c4e9aae18, 0, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MMPTE_LIST.Protection", protection, 0x5, 0x5, true, 0x1db6cecc49aacffc, 5, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_LIST.Prototype", prototype, 0xa, 0x1, true, 0xda5c9010eb71aceb, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_LIST.Transition", transition, 0xb, 0x1, true, 0xf3ff4857340894b8, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_MMPTE_LIST.filler1", filler1, 0xc, 0x10, true, 0xf399faeee6fff289, 16, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint36_t), "_MMPTE_LIST.NextEntry", next_entry, 0x1c, 0x24, true, 0x3bf3dea465cef7e4, 36, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_LIST.SwizzleBit", swizzle_bit, 0x4, 0x1, true, 0x6de441d3e61474b0, 1, uint64_t)
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
#endif