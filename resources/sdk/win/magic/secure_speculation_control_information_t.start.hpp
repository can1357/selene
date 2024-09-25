#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.KvaShadowSupported", kva_shadow_supported, 0x0, 0x1, true, 0x1a7884e4fa8635d, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.KvaShadowEnabled", kva_shadow_enabled, 0x1, 0x1, true, 0xad8e01f50a276ad6, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.KvaShadowUserGlobal", kva_shadow_user_global, 0x2, 0x1, true, 0x68612c871b766e10, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.KvaShadowPcid", kva_shadow_pcid, 0x3, 0x1, true, 0x947c47decd67d948, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.MbClearEnabled", mb_clear_enabled, 0x4, 0x1, true, 0xc37a9596db2e6bb1, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.L1TFMitigated", l1tf_mitigated, 0x0, 0x0, false, 0x2e12868884af0863, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.BpbEnabled", bpb_enabled, 0x0, 0x0, false, 0xd6693dd802067c2c, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.IbrsPresent", ibrs_present, 0x0, 0x0, false, 0xb814cc40ae877072, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.EnhancedIbrs", enhanced_ibrs, 0x0, 0x0, false, 0x8c5bf633e3d5243e, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.StibpPresent", stibp_present, 0x0, 0x0, false, 0xfa40a02067d320f4, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.SsbdSupported", ssbd_supported, 0x0, 0x0, false, 0xfe335c515bcdc3ba, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.SsbdRequired", ssbd_required, 0x0, 0x0, false, 0x515d8c6c0372b927, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.BpbKernelToUser", bpb_kernel_to_user, 0x0, 0x0, false, 0xaf914b09b59b3779, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags.BpbUserToKernel", bpb_user_to_kernel, 0x0, 0x0, false, 0xfb2674be73b37364, 1, uint32_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_secure_speculation_flags_t), "_SECURE_SPECULATION_CONTROL_INFORMATION.SecureSpeculationFlags", secure_speculation_flags, 0x0, 0x20, true, 0x248aab4a4edcf589)
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
#endif