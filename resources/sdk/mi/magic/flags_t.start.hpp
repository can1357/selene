#if !IN_PARSER
#define _m000 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.VerifierEnabled", verifier_enabled, 0x0, 0x1, true, 0xf4b7c11e624c4561, 1, uint32_t)
#define _m001 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.KernelVerifierEnabled", kernel_verifier_enabled, 0x1, 0x1, true, 0x1bc99ffd0dfd580a, 1, uint32_t)
#define _m002 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.LargePageKernel", large_page_kernel, 0x2, 0x1, true, 0xc785e3f1d3404491, 1, uint32_t)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.StopOn4d", stop_on4d, 0x3, 0x1, true, 0xd9d1e9e8ec8140b0, 1, uint32_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MI_FLAGS.InitializationPhase", initialization_phase, 0x4, 0x2, true, 0x71a8333585d6c7a9, 2, uint32_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.PageKernelStacks", page_kernel_stacks, 0x6, 0x1, true, 0xc3d8d7eca4439a25, 1, uint32_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.CheckZeroPages", check_zero_pages, 0x7, 0x1, true, 0x34499b8334957b9e, 1, uint32_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.ProcessorPrewalks", processor_prewalks, 0x8, 0x1, true, 0xbbd4eae7f4a69839, 1, uint32_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.ProcessorPostwalks", processor_postwalks, 0x9, 0x1, true, 0x6521445c64da3a98, 1, uint32_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.CoverageBuild", coverage_build, 0xa, 0x1, true, 0xe939107ae3d1a336, 1, uint32_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.CheckExecute", check_execute, 0xc, 0x1, true, 0xe061a881cd698eb6, 1, uint32_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.ProtectedPagesEnabled", protected_pages_enabled, 0xd, 0x1, true, 0xba9f578bcff75d48, 1, uint32_t)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.SecureRelocations", secure_relocations, 0xe, 0x1, true, 0x364bdf46af4dbddf, 1, uint32_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.StrongPageIdentity", strong_page_identity, 0xf, 0x1, true, 0xb83747850f834d2a, 1, uint32_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.StrongCodeGuarantees", strong_code_guarantees, 0x10, 0x1, true, 0x12f8b263bbaa5a5b, 1, uint32_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.HardCodeGuarantees", hard_code_guarantees, 0x11, 0x1, true, 0x51ccc6c2f8e25d78, 1, uint32_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.ExecutePagePrivilegeRequired", execute_page_privilege_required, 0x12, 0x1, true, 0xb120c0c5434aa278, 1, uint32_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.FullHvci", full_hvci, 0x14, 0x1, true, 0x390f5b9c4282f912, 1, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.BootDebuggerActive", boot_debugger_active, 0x15, 0x1, true, 0xf2854b34532779ea, 1, uint32_t)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_FLAGS.EntireFlags", entire_flags, 0x0, 0x20, true, 0x67c47f5d39a5a84c)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.AccessBitReplacementDisabled", access_bit_replacement_disabled, 0xb, 0x1, true, 0x467369109b8ab31, 1, uint32_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.SecureKernelCfgEnabled", secure_kernel_cfg_enabled, 0x13, 0x1, true, 0xb6fe73a587a520bd, 1, uint32_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.ExceptionHandlingReady", exception_handling_ready, 0x16, 0x1, true, 0xa20f8a443219b249, 1, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.ShadowStacksSupported", shadow_stacks_supported, 0x17, 0x1, true, 0x9aeb59e458832679, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.AccessBitFenceRequired", access_bit_fence_required, 0x18, 0x1, true, 0xdd5d2dc9ee58a941, 1, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.PfnDatabaseExists", pfn_database_exists, 0x19, 0x1, true, 0x1fa92e6a62badcb, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.SystemPtesReady", system_ptes_ready, 0x1b, 0x1, true, 0x1c482ebb1ce20680, 1, uint32_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.DeferredHotAddsCompleted", deferred_hot_adds_completed, 0x1a, 0x1, true, 0x893fd11dcb6fbfd5, 1, uint32_t)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MI_FLAGS.AccessBitReplacementCapability", access_bit_replacement_capability, 0x0, 0x0, false, 0x9feb8a224d6ce5a5, 2, uint32_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.PfnDatabaseGapsFilled", pfn_database_gaps_filled, 0x0, 0x0, false, 0x19b4e63fe2f315ad, 1, uint32_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.BootImageUnprivilegedPagesUnregistered", boot_image_unprivileged_pages_unregistered, 0x0, 0x0, false, 0x9c9888b2452eb767, 1, uint32_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.ImageProtectedSlabExecutableOnly", image_protected_slab_executable_only, 0x0, 0x0, false, 0x4d99720b7a70ea6, 1, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.SpecialReadOnlyProtectedSlabPages", special_read_only_protected_slab_pages, 0x0, 0x0, false, 0xbf05c816a7149ddc, 1, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.SlabAllocatorsReady", slab_allocators_ready, 0x0, 0x0, false, 0xe16e8dd4450b659a, 1, uint32_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.KasanEnabled", kasan_enabled, 0x0, 0x0, false, 0x8ca58daab57a0102, 1, uint32_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_FLAGS.SlatKernelCodeProtected", slat_kernel_code_protected, 0x0, 0x0, false, 0xdd5149a87ca41600, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MI_FLAGS.KvaShadow", kva_shadow, 0x0, 0x0, false, 0x83f88f829774bded, 2, uint32_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#endif