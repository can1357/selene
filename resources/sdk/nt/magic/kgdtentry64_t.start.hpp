#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KGDTENTRY64.LimitLow", limit_low, 0x0, 0x10, true, 0x30aee7feed4bf448)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KGDTENTRY64.BaseLow", base_low, 0x10, 0x10, true, 0xa8a2f53bb0ce14d9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KGDTENTRY64.Bytes.BaseMiddle", base_middle, 0x0, 0x8, true, 0x6b9fb4c9b99f0148)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KGDTENTRY64.Bytes.Flags1", flags1, 0x8, 0x8, true, 0x2cda4df39bdb3fe2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KGDTENTRY64.Bytes.Flags2", flags2, 0x10, 0x8, true, 0x4940044a232c1a63)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KGDTENTRY64.Bytes.BaseHigh", base_high, 0x18, 0x8, true, 0x1b859aeeab519e48)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bytes_t), "_KGDTENTRY64.Bytes", bytes, 0x20, 0x20, true, 0x7c4b75229995653e)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_KGDTENTRY64.Bits.BaseMiddle", base_middle, 0x0, 0x8, true, 0xcea03cd8aaca57cc, 8, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_KGDTENTRY64.Bits.Type", type, 0x8, 0x5, true, 0xc18167fc7b9b2a45, 5, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_KGDTENTRY64.Bits.Dpl", dpl, 0xd, 0x2, true, 0x11c458e2a581ae68, 2, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KGDTENTRY64.Bits.Present", present, 0xf, 0x1, true, 0x9e408a22c26a21c, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_KGDTENTRY64.Bits.LimitHigh", limit_high, 0x10, 0x4, true, 0xd980e5a0f9f5274f, 4, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KGDTENTRY64.Bits.System", system, 0x14, 0x1, true, 0xade8bc244a51a59c, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KGDTENTRY64.Bits.LongMode", long_mode, 0x15, 0x1, true, 0x1b829cb4c47ddc56, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KGDTENTRY64.Bits.DefaultBig", default_big, 0x16, 0x1, true, 0x85fcb5600841d7b, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KGDTENTRY64.Bits.Granularity", granularity, 0x17, 0x1, true, 0x997b27d0c6f97c7, 1, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_KGDTENTRY64.Bits.BaseHigh", base_high, 0x18, 0x8, true, 0x84260417d57bcbc7, 8, uint32_t)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bits_t), "_KGDTENTRY64.Bits", bits, 0x20, 0x20, true, 0x75aa3c4f6f27e03d)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KGDTENTRY64.BaseUpper", base_upper, 0x40, 0x20, true, 0x300d48bf98a5504f)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KGDTENTRY64.MustBeZero", must_be_zero, 0x60, 0x20, true, 0x38b33bdafa33bf5d)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KGDTENTRY64.DataLow", data_low, 0x0, 0x40, true, 0x95eb38dcf0231931)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KGDTENTRY64.DataHigh", data_high, 0x40, 0x40, true, 0x5c3c59dcd819f9b6)
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
#define _m19
#define _m20
#define _m21
#endif