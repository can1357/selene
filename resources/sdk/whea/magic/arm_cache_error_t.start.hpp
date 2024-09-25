#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::arm_cache_error_valid_bits_t), "_WHEA_ARM_CACHE_ERROR.ValidationBit", validation_bit, 0x0, 0x10, true, 0x463752dd565418d0)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_ARM_CACHE_ERROR.TransactionType", transaction_type, 0x10, 0x2, true, 0xfdcf9e745ec39d6c, 2, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WHEA_ARM_CACHE_ERROR.Operation", operation, 0x12, 0x4, true, 0x46f9d08a07390331, 4, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WHEA_ARM_CACHE_ERROR.Level", level, 0x18, 0x3, true, 0xbd71c566cb466d74, 3, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_CACHE_ERROR.ProcessorContextCorrupt", processor_context_corrupt, 0x1b, 0x1, true, 0x432a39224e48c9da, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_CACHE_ERROR.Corrected", corrected, 0x1c, 0x1, true, 0x2d9b916aaf677c58, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_CACHE_ERROR.PrecisePC", precise_pc, 0x1d, 0x1, true, 0x7b4c9293871dd661, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ARM_CACHE_ERROR.RestartablePC", restartable_pc, 0x1e, 0x1, true, 0xa0c32b4793ec889d, 1, uint8_t)
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