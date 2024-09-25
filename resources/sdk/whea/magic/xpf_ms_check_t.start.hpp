#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_MS_CHECK.ErrorTypeValid", error_type_valid, 0x0, 0x1, true, 0xda79940903f3507c, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_MS_CHECK.ProcessorContextCorruptValid", processor_context_corrupt_valid, 0x1, 0x1, true, 0xe05a4bc86cfc5a9d, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_MS_CHECK.UncorrectedValid", uncorrected_valid, 0x2, 0x1, true, 0xa13ac18d93066c7, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_MS_CHECK.PreciseIPValid", precise_ip_valid, 0x3, 0x1, true, 0xd5fbe077bf01c3b0, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_MS_CHECK.RestartableIPValid", restartable_ip_valid, 0x4, 0x1, true, 0xa259d8b85a89e867, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_MS_CHECK.OverflowValid", overflow_valid, 0x5, 0x1, true, 0xb96e32f6e27da5ac, 1, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_WHEA_XPF_MS_CHECK.ReservedValue", reserved_value, 0x6, 0xa, true, 0x9a4f741e9fd6ba8a, 10, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WHEA_XPF_MS_CHECK.ErrorType", error_type, 0x10, 0x3, true, 0xafb7cf0fb1eecf75, 3, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_MS_CHECK.ProcessorContextCorrupt", processor_context_corrupt, 0x13, 0x1, true, 0x80964ba3bfd8fd17, 1, uint64_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_MS_CHECK.Uncorrected", uncorrected, 0x14, 0x1, true, 0xabdad69858e66b71, 1, uint64_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_MS_CHECK.PreciseIP", precise_ip, 0x15, 0x1, true, 0xe4fbc6846ff86ea0, 1, uint64_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_MS_CHECK.RestartableIP", restartable_ip, 0x16, 0x1, true, 0xd1362d5876af4ed6, 1, uint64_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_MS_CHECK.Overflow", overflow, 0x17, 0x1, true, 0x36dda533d8184264, 1, uint64_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_MS_CHECK.XpfMsCheck", xpf_ms_check, 0x0, 0x40, true, 0x6b6c8b6b2c0e4916)
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