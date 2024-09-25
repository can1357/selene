#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::arm_bus_error_valid_bits_t), "_WHEA_ARM_BUS_ERROR.ValidationBit", validation_bit, 0x0, 0x10, true, 0x9fa7052042bf1705)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_ARM_BUS_ERROR.TransactionType", transaction_type, 0x10, 0x2, true, 0x5e4b196f897d2224, 2, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WHEA_ARM_BUS_ERROR.Operation", operation, 0x12, 0x4, true, 0xed757bfa8f731c85, 4, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WHEA_ARM_BUS_ERROR.Level", level, 0x18, 0x3, true, 0xdfc552824a263ca8, 3, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR.ProcessorContextCorrupt", processor_context_corrupt, 0x1b, 0x1, true, 0x176edb48b08c5668, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR.Corrected", corrected, 0x1c, 0x1, true, 0x65e8ad3c3a102a27, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR.PrecisePC", precise_pc, 0x1d, 0x1, true, 0x7cc89f564c0b1532, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR.RestartablePC", restartable_pc, 0x1e, 0x1, true, 0x966ca48b015f8e5b, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR.TimeOut", time_out, 0x22, 0x1, true, 0x60e82b9888b88c9d, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_ARM_BUS_ERROR.AddressSpace", address_space, 0x23, 0x2, true, 0x891f553611a6bcfb, 2, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint9_t), "_WHEA_ARM_BUS_ERROR.MemoryAccessAttributes", memory_access_attributes, 0x28, 0x9, true, 0x870173318845db27, 9, uint16_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_BUS_ERROR.AccessMode", access_mode, 0x38, 0x1, true, 0x400913dbbfdaf111, 1, uint8_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_ARM_BUS_ERROR.ParticipationType", participation_type, 0x20, 0x2, true, 0xc2efb901d59e24e4, 2, uint8_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_ARM_BUS_ERROR.PariticpationType", pariticpation_type, 0x20, 0x2, true, 0xb9762d050d17581, 2, uint8_t)
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
#endif