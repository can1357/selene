#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.Size", size, 0x0, 0x20, true, 0xadf1899a8c07b26b)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.TimeDateStamp", time_date_stamp, 0x20, 0x20, true, 0x4b05209e90ffe5fb)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.MajorVersion", major_version, 0x40, 0x10, true, 0xc12f2a56e8b42b6c)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.MinorVersion", minor_version, 0x50, 0x10, true, 0xde31e1b807402bee)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GlobalFlagsClear", global_flags_clear, 0x60, 0x20, true, 0x7567c9aec1512860)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GlobalFlagsSet", global_flags_set, 0x80, 0x20, true, 0x6ebb0f21f7a0ce18)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.CriticalSectionDefaultTimeout", critical_section_default_timeout, 0xa0, 0x20, true, 0x371f6eefb2f630ab)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.DeCommitFreeBlockThreshold", de_commit_free_block_threshold, 0xc0, 0x20, true, 0x6fe92a0446d8928b)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.DeCommitTotalFreeThreshold", de_commit_total_free_threshold, 0xe0, 0x20, true, 0x39e963578def8d30)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.LockPrefixTable", lock_prefix_table, 0x100, 0x20, true, 0xe9c68c80d224cffb)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.MaximumAllocationSize", maximum_allocation_size, 0x120, 0x20, true, 0xadfd032c9fb96c6d)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.VirtualMemoryThreshold", virtual_memory_threshold, 0x140, 0x20, true, 0xef0a1bf64d92ec76)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.ProcessHeapFlags", process_heap_flags, 0x160, 0x20, true, 0xfb0c6357f76db72d)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.ProcessAffinityMask", process_affinity_mask, 0x180, 0x20, true, 0x72cba196a210db7d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.CSDVersion", csd_version, 0x1a0, 0x10, true, 0xb362176de0a363e2)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.DependentLoadFlags", dependent_load_flags, 0x1b0, 0x10, true, 0x56f23916bce5513d)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.EditList", edit_list, 0x1c0, 0x20, true, 0xb35aac48c295e3cd)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.SecurityCookie", security_cookie, 0x1e0, 0x20, true, 0xeec72105e19e2e08)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.SEHandlerTable", se_handler_table, 0x200, 0x20, true, 0xa35a1b1ece816bfb)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.SEHandlerCount", se_handler_count, 0x220, 0x20, true, 0x6963b8bae56d7d4d)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardCFCheckFunctionPointer", guard_cf_check_function_pointer, 0x240, 0x20, true, 0x4e75b780229016dc)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardCFDispatchFunctionPointer", guard_cf_dispatch_function_pointer, 0x260, 0x20, true, 0x8a1fecce2665d80c)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardCFFunctionTable", guard_cf_function_table, 0x280, 0x20, true, 0xb9693ae6699a6bc8)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardCFFunctionCount", guard_cf_function_count, 0x2a0, 0x20, true, 0xe7545e3c21a0f7bc)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardFlags", guard_flags, 0x2c0, 0x20, true, 0x3cdfd3c4a8ad7dfe)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::load_config_code_integrity_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.CodeIntegrity", code_integrity, 0x2e0, 0x60, true, 0x48ccdded08f39267)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardAddressTakenIatEntryTable", guard_address_taken_iat_entry_table, 0x340, 0x20, true, 0xb88fd5f7603f9cbd)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardAddressTakenIatEntryCount", guard_address_taken_iat_entry_count, 0x360, 0x20, true, 0x75bb1ae5797590c7)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardLongJumpTargetTable", guard_long_jump_target_table, 0x380, 0x20, true, 0x25bcbbcaea242f62)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardLongJumpTargetCount", guard_long_jump_target_count, 0x3a0, 0x20, true, 0x38dfaf43d26af275)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.DynamicValueRelocTable", dynamic_value_reloc_table, 0x3c0, 0x20, true, 0xb1f34318c7803161)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.CHPEMetadataPointer", chpe_metadata_pointer, 0x3e0, 0x20, true, 0x1d63e37e6ee10867)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardRFFailureRoutine", guard_rf_failure_routine, 0x400, 0x20, true, 0x87092e35e5cc511c)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardRFFailureRoutineFunctionPointer", guard_rf_failure_routine_function_pointer, 0x420, 0x20, true, 0xebd1ea99caaa7c4e)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.DynamicValueRelocTableOffset", dynamic_value_reloc_table_offset, 0x440, 0x20, true, 0xd2f9c94280fbc25b)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.DynamicValueRelocTableSection", dynamic_value_reloc_table_section, 0x460, 0x10, true, 0x4759d0e39c445ca6)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardRFVerifyStackPointerFunctionPointer", guard_rf_verify_stack_pointer_function_pointer, 0x480, 0x20, true, 0xa76ccbd25e4abd5)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.HotPatchTableOffset", hot_patch_table_offset, 0x4a0, 0x20, true, 0x75242c704b5d67a3)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.EnclaveConfigurationPointer", enclave_configuration_pointer, 0x4e0, 0x20, true, 0xacfbcb5ab6418d66)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.VolatileMetadataPointer", volatile_metadata_pointer, 0x500, 0x20, true, 0x15f030c1df333962)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardEHContinuationTable", guard_eh_continuation_table, 0x520, 0x20, true, 0x5aea3bbc283ada12)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardEHContinuationCount", guard_eh_continuation_count, 0x540, 0x20, true, 0x987c8dd7c7468012)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.HybridMetadataPointer", hybrid_metadata_pointer, 0x0, 0x0, false, 0x929ab04c1ec7c994)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardXFGCheckFunctionPointer", guard_xfg_check_function_pointer, 0x0, 0x0, false, 0xa6c480f6f8f6d84)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardXFGDispatchFunctionPointer", guard_xfg_dispatch_function_pointer, 0x0, 0x0, false, 0x43cd2832851803fa)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.GuardXFGTableDispatchFunctionPointer", guard_xfg_table_dispatch_function_pointer, 0x0, 0x0, false, 0x1668d72a706932aa)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY32.CastGuardOsDeterminedFailureMode", cast_guard_os_determined_failure_mode, 0x0, 0x0, false, 0x8d9554e9a40b56da)
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
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#endif