#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.KvaShadowFlags.KvaShadowEnabled", kva_shadow_enabled, 0x0, 0x1, true, 0x53fca68d83064127, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.KvaShadowFlags.KvaShadowUserGlobal", kva_shadow_user_global, 0x1, 0x1, true, 0xe1b578c531465f96, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.KvaShadowFlags.KvaShadowPcid", kva_shadow_pcid, 0x2, 0x1, true, 0x1941f79441edc2a0, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.KvaShadowFlags.KvaShadowInvpcid", kva_shadow_invpcid, 0x3, 0x1, true, 0xaab1447859397aa6, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.KvaShadowFlags.KvaShadowRequired", kva_shadow_required, 0x4, 0x1, true, 0xb532afe047c5e11b, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.KvaShadowFlags.KvaShadowRequiredAvailable", kva_shadow_required_available, 0x5, 0x1, true, 0xc6779e5e1c27a340, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.KvaShadowFlags.InvalidPteBit", invalid_pte_bit, 0x6, 0x6, true, 0xaf5ee21099893f4e, 6, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.KvaShadowFlags.L1DataCacheFlushSupported", l1_data_cache_flush_supported, 0xc, 0x1, true, 0xc8bb037166f8abb5, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.KvaShadowFlags.L1TerminalFaultMitigationPresent", l1_terminal_fault_mitigation_present, 0xd, 0x1, true, 0xe0be13d8076f876d, 1, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_kva_shadow_flags_t), "_SYSTEM_KERNEL_VA_SHADOW_INFORMATION.KvaShadowFlags", kva_shadow_flags, 0x0, 0x20, true, 0x6449a44cf16c56bd)
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
#endif