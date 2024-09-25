#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_CACHE_ERROR_VALID_BITS.TransactionType", transaction_type, 0x0, 0x1, true, 0x7096efbafcb5297, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_CACHE_ERROR_VALID_BITS.Operation", operation, 0x1, 0x1, true, 0xf8685bc67eeeeb56, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_CACHE_ERROR_VALID_BITS.Level", level, 0x2, 0x1, true, 0x75f2478a8f55db4b, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_CACHE_ERROR_VALID_BITS.ProcessorContextCorrupt", processor_context_corrupt, 0x3, 0x1, true, 0x62a741d84549e528, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_CACHE_ERROR_VALID_BITS.Corrected", corrected, 0x4, 0x1, true, 0xf85b2cfee73fece, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_CACHE_ERROR_VALID_BITS.PrecisePC", precise_pc, 0x5, 0x1, true, 0x411e5dade20a4625, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_CACHE_ERROR_VALID_BITS.RestartablePC", restartable_pc, 0x6, 0x1, true, 0xb817c783bf28b2d9, 1, uint16_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ARM_CACHE_ERROR_VALID_BITS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x962cc195f686a91b)
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