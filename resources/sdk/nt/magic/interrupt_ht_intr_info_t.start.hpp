#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INTERRUPT_HT_INTR_INFO.LowPart.bits.Mask", mask, 0x0, 0x1, true, 0xa766b39ba8a1dd0c, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INTERRUPT_HT_INTR_INFO.LowPart.bits.Polarity", polarity, 0x1, 0x1, true, 0xedc2430bf6bb0729, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_INTERRUPT_HT_INTR_INFO.LowPart.bits.MessageType", message_type, 0x2, 0x3, true, 0x36d49d16506c274f, 3, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INTERRUPT_HT_INTR_INFO.LowPart.bits.RequestEOI", request_eoi, 0x5, 0x1, true, 0x8818d65845402af1, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INTERRUPT_HT_INTR_INFO.LowPart.bits.DestinationMode", destination_mode, 0x6, 0x1, true, 0xdde1a2d548bfe09b, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INTERRUPT_HT_INTR_INFO.LowPart.bits.MessageType3", message_type3, 0x7, 0x1, true, 0x9ef0dfc024acd3e8, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_INTERRUPT_HT_INTR_INFO.LowPart.bits.Destination", destination, 0x8, 0x8, true, 0xbc6651bab0fe800a, 8, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_INTERRUPT_HT_INTR_INFO.LowPart.bits.Vector", vector, 0x10, 0x8, true, 0x411da05b4ee56170, 8, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_INTERRUPT_HT_INTR_INFO.LowPart.bits.ExtendedAddress", extended_address, 0x18, 0x8, true, 0x92c5340fb2a86e22, 8, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bits_t), "_INTERRUPT_HT_INTR_INFO.LowPart.bits", bits, 0x0, 0x20, true, 0x1eeb55ab5e925e30)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_HT_INTR_INFO.LowPart.AsULONG", as_ulong, 0x0, 0x20, true, 0xfb90f0f5a79ec61d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_low_part_t), "_INTERRUPT_HT_INTR_INFO.LowPart", low_part, 0x0, 0x20, true, 0xb30f18bf0fe317bc)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_INTERRUPT_HT_INTR_INFO.HighPart.bits.ExtendedDestination", extended_destination, 0x0, 0x18, true, 0xefbf6221c708c6a4, 24, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INTERRUPT_HT_INTR_INFO.HighPart.bits.PassPW", pass_pw, 0x1e, 0x1, true, 0x484bfde643c47339, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INTERRUPT_HT_INTR_INFO.HighPart.bits.WaitingForEOI", waiting_for_eoi, 0x1f, 0x1, true, 0x36912a0a784cdd5b, 1, uint32_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_bits_t), "_INTERRUPT_HT_INTR_INFO.HighPart.bits", bits, 0x0, 0x20, true, 0x7a68f62ecea8f6b6)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_HT_INTR_INFO.HighPart.AsULONG", as_ulong, 0x0, 0x20, true, 0x2051787f282862db)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_high_part_t), "_INTERRUPT_HT_INTR_INFO.HighPart", high_part, 0x20, 0x20, true, 0x616aec05fe8c0eda)
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
#endif