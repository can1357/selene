#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_TIMESTAMP.MustBeZero", must_be_zero, 0x0, 0x1, true, 0xd10d4efeb14b6f8e, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MMPTE_TIMESTAMP.Protection", protection, 0x5, 0x5, true, 0x5fa5520c6033e14, 5, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_TIMESTAMP.Prototype", prototype, 0xa, 0x1, true, 0xbab7fee2f4e0a5e, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_TIMESTAMP.Transition", transition, 0xb, 0x1, true, 0xb846e4e2c5353e04, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMPTE_TIMESTAMP.PageFileLow", page_file_low, 0xc, 0x4, true, 0x8e764c443ede3bdd, 4, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_MMPTE_TIMESTAMP.GlobalTimeStamp", global_time_stamp, 0x20, 0x20, true, 0x4ed1a9b99bc30f9, 32, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_TIMESTAMP.SwizzleBit", swizzle_bit, 0x4, 0x1, true, 0xde0da6de804918bb, 1, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif