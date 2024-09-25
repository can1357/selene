#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KLDTENTRY.LimitLow", limit_low, 0x0, 0x0, false, 0x943c29b8f502fa56)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KLDTENTRY.BaseLow", base_low, 0x0, 0x0, false, 0x512b87f1b7477fe9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KLDTENTRY.HighWord.Bytes.BaseMid", base_mid, 0x0, 0x0, false, 0x6cedf98e44eb0bcc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KLDTENTRY.HighWord.Bytes.Flags1", flags1, 0x0, 0x0, false, 0xae705593afe3dd29)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KLDTENTRY.HighWord.Bytes.Flags2", flags2, 0x0, 0x0, false, 0x44d335fbffe9af52)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KLDTENTRY.HighWord.Bytes.BaseHi", base_hi, 0x0, 0x0, false, 0x2a8fab768a32c4b9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_bytes_t), "_KLDTENTRY.HighWord.Bytes", bytes, 0x0, 0x0, false, 0x8cbdf63743c43650)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_KLDTENTRY.HighWord.Bits.BaseMid", base_mid, 0x0, 0x0, false, 0x3e14bf4568664a2b, 8, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_KLDTENTRY.HighWord.Bits.Type", type, 0x0, 0x0, false, 0xe2eef9ccb8e40d10, 5, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_KLDTENTRY.HighWord.Bits.Dpl", dpl, 0x0, 0x0, false, 0x9dafecfbbd7128af, 2, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLDTENTRY.HighWord.Bits.Pres", pres, 0x0, 0x0, false, 0x6d5719d21ac57438, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_KLDTENTRY.HighWord.Bits.LimitHi", limit_hi, 0x0, 0x0, false, 0xf3d3c5f26bdf49f1, 4, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLDTENTRY.HighWord.Bits.Sys", sys, 0x0, 0x0, false, 0x473a5794546f5d07, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLDTENTRY.HighWord.Bits.Reserved_0", reserved_0, 0x0, 0x0, false, 0xd575a59de5747361, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLDTENTRY.HighWord.Bits.Default_Big", default_big, 0x0, 0x0, false, 0x6904a0c64106a611, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KLDTENTRY.HighWord.Bits.Granularity", granularity, 0x0, 0x0, false, 0x2b64a33718a05b99, 1, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_KLDTENTRY.HighWord.Bits.BaseHi", base_hi, 0x0, 0x0, false, 0x34fda4ead0ae4b90, 8, uint32_t)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_bits_t), "_KLDTENTRY.HighWord.Bits", bits, 0x0, 0x0, false, 0x1789d2c014af80f2)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_high_word_t), "_KLDTENTRY.HighWord", high_word, 0x0, 0x0, false, 0x542a4d32773c03c0)
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