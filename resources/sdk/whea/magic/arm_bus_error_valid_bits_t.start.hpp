#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.TransactionType", transaction_type, 0x0, 0x1, true, 0x52b61581e6363b9b, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.Operation", operation, 0x1, 0x1, true, 0xd94c446083887762, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.Level", level, 0x2, 0x1, true, 0x9788cb5bc894440f, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.ProcessorContextCorrupt", processor_context_corrupt, 0x3, 0x1, true, 0x123d7de60e5d7970, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.Corrected", corrected, 0x4, 0x1, true, 0x9f62653cf4d2adac, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.PrecisePC", precise_pc, 0x5, 0x1, true, 0x86b28676b9444079, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.RestartablePC", restartable_pc, 0x6, 0x1, true, 0xb28ba7251fed3d2f, 1, uint16_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.ParticipationType", participation_type, 0x7, 0x1, true, 0xb03ab8e958f828a9, 1, uint16_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.Timeout", timeout, 0x8, 0x1, true, 0xaf3092320f3dc686, 1, uint16_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.AddressSpace", address_space, 0x9, 0x1, true, 0x5f71cec971345aa5, 1, uint16_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.MemoryAttributes", memory_attributes, 0xa, 0x1, true, 0x9c446a7480d2768d, 1, uint16_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.AccessMode", access_mode, 0xb, 0x1, true, 0x8d599419c6be9b46, 1, uint16_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ARM_BUS_ERROR_VALID_BITS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x3423a711674d5c8)
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
#endif