#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.AffinityMask", affinity_mask, 0x0, 0x40, true, 0x8877162461b07266)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.CPUIDEcxOverride", cpuid_ecx_override, 0x40, 0x20, true, 0xaea6b121b4893e8b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.CPUIDEdxOverride", cpuid_edx_override, 0x60, 0x20, true, 0x164db0f0496b922)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.ProcessorGroup", processor_group, 0x80, 0x10, true, 0x5decf59d47fcb3d7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.FastSelfModThreshold", fast_self_mod_threshold, 0x90, 0x10, true, 0xbb9037cbbafa1ed6)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.CPUIDBrand", cpuid_brand, 0xb8, 0x4, true, 0xc682dabeddda13b3, 4, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.RdtscScaling", rdtsc_scaling, 0xc0, 0x3, true, 0xf6ffde6ceadefa94, 3, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.UnalignedAtomicApproach", unaligned_atomic_approach, 0xc5, 0x2, true, 0xe541709c9038ea8a, 2, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.RunOnSingleCore", run_on_single_core, 0xc7, 0x1, true, 0x6e21799f8fb9682f, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.PatchUnaligned", patch_unaligned, 0xc9, 0x1, true, 0x3bce31d59d79da35, 1, uint8_t)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.Group1AsUINT64", group1_as_uint64, 0x0, 0x40, true, 0x3baea54614e08ab1)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.AffinityMask", affinity_mask, 0x0, 0x1, true, 0xdbda60d7281c3866, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.CPUIDEcxOverride", cpuid_ecx_override, 0x1, 0x1, true, 0xda1c8b87bafba16, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.CPUIDEdxOverride", cpuid_edx_override, 0x2, 0x1, true, 0x30e807aeff11710f, 1, uint8_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.ProcessorGroup", processor_group, 0x3, 0x1, true, 0x9caad52b874ce1a0, 1, uint8_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.FastSelfModThreshold", fast_self_mod_threshold, 0x4, 0x1, true, 0x76c9c08f88b31fa4, 1, uint8_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.CPUIDBrand", cpuid_brand, 0x7, 0x1, true, 0xd8d5d015aea6270, 1, uint8_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.RdtscScaling", rdtsc_scaling, 0x9, 0x1, true, 0x5b12d5201c49083e, 1, uint8_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.UnalignedAtomicApproach", unaligned_atomic_approach, 0xb, 0x1, true, 0x2ce7fe367fb45be, 1, uint8_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.RunOnSingleCore", run_on_single_core, 0xc, 0x1, true, 0x5b3124b0a1e2675d, 1, uint8_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.PatchUnaligned", patch_unaligned, 0xe, 0x1, true, 0x94d0472e7ddda1b9, 1, uint8_t)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.InlineCFGChecks", inline_cfg_checks, 0xd, 0x1, true, 0x16be8997781051eb, 1, uint8_t)
#define _m22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.X64CPUID", x64cpuid, 0x0, 0x0, false, 0xdfea0cb7b11d7cc6, 1, uint8_t)
#define _m23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified.InterpreterOrJitter", interpreter_or_jitter, 0x0, 0x0, false, 0x60797fb2306ec0c8, 1, uint8_t)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_specified_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.Specified", specified, 0x100, 0x40, true, 0xdd6056822dc78e0)
#define _m25 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.InlineCFGChecks", inline_cfg_checks, 0xc8, 0x1, true, 0xe6139322711eac36, 1, uint8_t)
#define _m26 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.X64CPUID", x64cpuid, 0x0, 0x0, false, 0xf6a096494b4d0dc4, 1, uint8_t)
#define _m27 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SDB_CSTRUCT_COBALT_PROCFLAG.InterpreterOrJitter", interpreter_or_jitter, 0x0, 0x0, false, 0x154de57e99fa8240, 1, uint8_t)
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
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#endif