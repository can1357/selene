#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.TransactionTypeValid", transaction_type_valid, 0x0, 0x1, true, 0x57ec49c9fd8a10f3, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.OperationValid", operation_valid, 0x1, 0x1, true, 0x5355f5e642a7e7f3, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.LevelValid", level_valid, 0x2, 0x1, true, 0x8dd44e28a695ab7c, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.ProcessorContextCorruptValid", processor_context_corrupt_valid, 0x3, 0x1, true, 0xc4f17df1070c6daf, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.UncorrectedValid", uncorrected_valid, 0x4, 0x1, true, 0x8d34f1a225d7a08e, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.PreciseIPValid", precise_ip_valid, 0x5, 0x1, true, 0xdeafe7c14f6b5fce, 1, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.RestartableIPValid", restartable_ip_valid, 0x6, 0x1, true, 0xb651451ab1add418, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.OverflowValid", overflow_valid, 0x7, 0x1, true, 0x49ac262090b7d094, 1, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_XPF_CACHE_CHECK.ReservedValid", reserved_valid, 0x8, 0x8, true, 0x30e9c8c2468a37c2, 8, uint64_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_XPF_CACHE_CHECK.TransactionType", transaction_type, 0x10, 0x2, true, 0xbe4bd5549f535feb, 2, uint64_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WHEA_XPF_CACHE_CHECK.Operation", operation, 0x12, 0x4, true, 0xfe85223ca75f517a, 4, uint64_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WHEA_XPF_CACHE_CHECK.Level", level, 0x16, 0x3, true, 0xec2351d343c7ee8, 3, uint64_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.ProcessorContextCorrupt", processor_context_corrupt, 0x19, 0x1, true, 0xb3c9ee40f17b31a2, 1, uint64_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.Uncorrected", uncorrected, 0x1a, 0x1, true, 0x11b376b50f9b9ccb, 1, uint64_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.PreciseIP", precise_ip, 0x1b, 0x1, true, 0x665152bc07be0357, 1, uint64_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.RestartableIP", restartable_ip, 0x1c, 0x1, true, 0xb9fa87e6679296bd, 1, uint64_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_CACHE_CHECK.Overflow", overflow, 0x1d, 0x1, true, 0x96aa0aecc5b89c9f, 1, uint64_t)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_CACHE_CHECK.XpfCacheCheck", xpf_cache_check, 0x0, 0x40, true, 0xf6fa2de3819dbb19)
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