#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_TLB_ERROR_VALID_BITS.TransactionType", transaction_type, 0x0, 0x1, true, 0x1366bf0bba897990, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_TLB_ERROR_VALID_BITS.Operation", operation, 0x1, 0x1, true, 0x666c451f35f5886c, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_TLB_ERROR_VALID_BITS.Level", level, 0x2, 0x1, true, 0x7274d533ffeaa03b, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_TLB_ERROR_VALID_BITS.ProcessorContextCorrupt", processor_context_corrupt, 0x3, 0x1, true, 0xe7427b41004c05c, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_TLB_ERROR_VALID_BITS.Corrected", corrected, 0x4, 0x1, true, 0x86f763849b46146f, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_TLB_ERROR_VALID_BITS.PrecisePC", precise_pc, 0x5, 0x1, true, 0xdfd44849254c0aff, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_TLB_ERROR_VALID_BITS.RestartablePC", restartable_pc, 0x6, 0x1, true, 0xc96ce25cfb0e0fea, 1, uint16_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ARM_TLB_ERROR_VALID_BITS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x700bcad920e4f06b)
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