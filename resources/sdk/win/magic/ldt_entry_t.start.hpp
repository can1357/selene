#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_LDT_ENTRY.LimitLow", limit_low, 0x0, 0x10, true, 0xf9d236c0b6400120)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_LDT_ENTRY.BaseLow", base_low, 0x10, 0x10, true, 0xa29110532dac6fb8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LDT_ENTRY.HighWord.Bytes.BaseMid", base_mid, 0x0, 0x8, true, 0xff23363505a021fd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LDT_ENTRY.HighWord.Bytes.Flags1", flags1, 0x8, 0x8, true, 0x7234c9e6c04d18ff)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LDT_ENTRY.HighWord.Bytes.Flags2", flags2, 0x10, 0x8, true, 0xf5fa1fe8746c318c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LDT_ENTRY.HighWord.Bytes.BaseHi", base_hi, 0x18, 0x8, true, 0x21e7c9db677b3f7d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bytes_t), "_LDT_ENTRY.HighWord.Bytes", bytes, 0x0, 0x20, true, 0xda55fbe9c6889079)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_LDT_ENTRY.HighWord.Bits.BaseMid", base_mid, 0x0, 0x8, true, 0x65ffba3e2db198d, 8, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_LDT_ENTRY.HighWord.Bits.Type", type, 0x8, 0x5, true, 0xcacb734c8a6169ef, 5, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_LDT_ENTRY.HighWord.Bits.Dpl", dpl, 0xd, 0x2, true, 0xa3f6865c56616326, 2, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDT_ENTRY.HighWord.Bits.Pres", pres, 0xf, 0x1, true, 0x5dcfcea1cc0b270b, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_LDT_ENTRY.HighWord.Bits.LimitHi", limit_hi, 0x10, 0x4, true, 0x28f430087536d00c, 4, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDT_ENTRY.HighWord.Bits.Sys", sys, 0x14, 0x1, true, 0x143b1bb7b757b16e, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDT_ENTRY.HighWord.Bits.Reserved_0", reserved_0, 0x15, 0x1, true, 0x546880b0111aec26, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDT_ENTRY.HighWord.Bits.Default_Big", default_big, 0x16, 0x1, true, 0x51b540eead4136b1, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LDT_ENTRY.HighWord.Bits.Granularity", granularity, 0x17, 0x1, true, 0x8e7ce0bc36d7947e, 1, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_LDT_ENTRY.HighWord.Bits.BaseHi", base_hi, 0x18, 0x8, true, 0x7f925bb64b859938, 8, uint32_t)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_bits_t), "_LDT_ENTRY.HighWord.Bits", bits, 0x0, 0x20, true, 0xb3cdf44f84aa7aae)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_high_word_t), "_LDT_ENTRY.HighWord", high_word, 0x20, 0x20, true, 0x3019b6d15c38226c)
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