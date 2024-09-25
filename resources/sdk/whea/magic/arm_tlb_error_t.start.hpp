#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::arm_tlb_error_valid_bits_t), "_WHEA_ARM_TLB_ERROR.ValidationBit", validation_bit, 0x0, 0x10, true, 0xa3f15b449982a793)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_ARM_TLB_ERROR.TransactionType", transaction_type, 0x10, 0x2, true, 0x5ffbc94825bb59e4, 2, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WHEA_ARM_TLB_ERROR.Operation", operation, 0x12, 0x4, true, 0xa9b922b6b48a860f, 4, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WHEA_ARM_TLB_ERROR.Level", level, 0x18, 0x3, true, 0xa466d4e462e5740b, 3, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_TLB_ERROR.ProcessorContextCorrupt", processor_context_corrupt, 0x1b, 0x1, true, 0x4f44e6a1118984f0, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_TLB_ERROR.Corrected", corrected, 0x1c, 0x1, true, 0xf9d4d15619310797, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_TLB_ERROR.PrecisePC", precise_pc, 0x1d, 0x1, true, 0x6db0acbf5a33e5c, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_TLB_ERROR.RestartablePC", restartable_pc, 0x1e, 0x1, true, 0xe0ddb7092d4387d5, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif