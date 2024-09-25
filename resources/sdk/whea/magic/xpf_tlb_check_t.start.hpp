#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.TransactionTypeValid", transaction_type_valid, 0x0, 0x1, true, 0x587ba4a282ac6006, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.OperationValid", operation_valid, 0x1, 0x1, true, 0x776dc97a73aff4c5, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.LevelValid", level_valid, 0x2, 0x1, true, 0xfd1bb01593d5e33, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.ProcessorContextCorruptValid", processor_context_corrupt_valid, 0x3, 0x1, true, 0x3575ef8c15376227, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.UncorrectedValid", uncorrected_valid, 0x4, 0x1, true, 0x909d76cd94a9ba2f, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.PreciseIPValid", precise_ip_valid, 0x5, 0x1, true, 0x3948de93d3d86dff, 1, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.RestartableIPValid", restartable_ip_valid, 0x6, 0x1, true, 0xa7738a5b92b8a8c0, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.OverflowValid", overflow_valid, 0x7, 0x1, true, 0xdb48f3a9ffa511e1, 1, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_XPF_TLB_CHECK.ReservedValid", reserved_valid, 0x8, 0x8, true, 0xb4af015102c2aac2, 8, uint64_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_XPF_TLB_CHECK.TransactionType", transaction_type, 0x10, 0x2, true, 0x80df6cc7beeecb15, 2, uint64_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WHEA_XPF_TLB_CHECK.Operation", operation, 0x12, 0x4, true, 0xb80bd21ffae20ec7, 4, uint64_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WHEA_XPF_TLB_CHECK.Level", level, 0x16, 0x3, true, 0x330445f26c1b8c1c, 3, uint64_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.ProcessorContextCorrupt", processor_context_corrupt, 0x19, 0x1, true, 0x3fdd13c9f15b60b9, 1, uint64_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.Uncorrected", uncorrected, 0x1a, 0x1, true, 0x6602e07a39b913ed, 1, uint64_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.PreciseIP", precise_ip, 0x1b, 0x1, true, 0xffcbc8fba5633a61, 1, uint64_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.RestartableIP", restartable_ip, 0x1c, 0x1, true, 0x6d89a49e73d9a174, 1, uint64_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_TLB_CHECK.Overflow", overflow, 0x1d, 0x1, true, 0x45702c8a02a6ea9e, 1, uint64_t)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_TLB_CHECK.XpfTLBCheck", xpf_tlb_check, 0x0, 0x40, true, 0x7ed3a69bcb690b3a)
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