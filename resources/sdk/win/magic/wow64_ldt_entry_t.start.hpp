#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WOW64_LDT_ENTRY.LimitLow", limit_low, 0x0, 0x10, true, 0x4665aef94587470c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WOW64_LDT_ENTRY.BaseLow", base_low, 0x10, 0x10, true, 0x5a082c47b2ac0b9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WOW64_LDT_ENTRY.HighWord.Bytes.BaseMid", base_mid, 0x0, 0x8, true, 0xade86eaef3b7d967)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WOW64_LDT_ENTRY.HighWord.Bytes.Flags1", flags1, 0x8, 0x8, true, 0xdd9cd547d1a63101)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WOW64_LDT_ENTRY.HighWord.Bytes.Flags2", flags2, 0x10, 0x8, true, 0x321557fc48e0ef2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WOW64_LDT_ENTRY.HighWord.Bytes.BaseHi", base_hi, 0x18, 0x8, true, 0x8c1381a502ef610)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bytes_t), "_WOW64_LDT_ENTRY.HighWord.Bytes", bytes, 0x0, 0x20, true, 0xe94fefafdb861c18)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WOW64_LDT_ENTRY.HighWord.Bits.BaseMid", base_mid, 0x0, 0x8, true, 0x4b4620223aae4701, 8, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_WOW64_LDT_ENTRY.HighWord.Bits.Type", type, 0x8, 0x5, true, 0xfa82caacba73d1aa, 5, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WOW64_LDT_ENTRY.HighWord.Bits.Dpl", dpl, 0xd, 0x2, true, 0x11be810cb93540c5, 2, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WOW64_LDT_ENTRY.HighWord.Bits.Pres", pres, 0xf, 0x1, true, 0xb75eb84d98bd2869, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WOW64_LDT_ENTRY.HighWord.Bits.LimitHi", limit_hi, 0x10, 0x4, true, 0x3c6606f1aaa2875d, 4, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WOW64_LDT_ENTRY.HighWord.Bits.Sys", sys, 0x14, 0x1, true, 0xc90cd035fb8aeb63, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WOW64_LDT_ENTRY.HighWord.Bits.Reserved_0", reserved_0, 0x15, 0x1, true, 0x2bfa07f9f2765449, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WOW64_LDT_ENTRY.HighWord.Bits.Default_Big", default_big, 0x16, 0x1, true, 0xcf9f1dbef8402616, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WOW64_LDT_ENTRY.HighWord.Bits.Granularity", granularity, 0x17, 0x1, true, 0x697553b526d29007, 1, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WOW64_LDT_ENTRY.HighWord.Bits.BaseHi", base_hi, 0x18, 0x8, true, 0x7c9771eaaf988772, 8, uint32_t)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_bits_t), "_WOW64_LDT_ENTRY.HighWord.Bits", bits, 0x0, 0x20, true, 0x2d451f18ed2217f5)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_high_word_t), "_WOW64_LDT_ENTRY.HighWord", high_word, 0x20, 0x20, true, 0xc700be68e931a6c0)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif