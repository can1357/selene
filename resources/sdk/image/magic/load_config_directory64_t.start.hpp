#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.Size", size, 0x0, 0x20, true, 0x8766bc9c9ecc8c32)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.TimeDateStamp", time_date_stamp, 0x20, 0x20, true, 0x8c37b35a6c252a15)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.MajorVersion", major_version, 0x40, 0x10, true, 0x6eaf16b9a0fd2a61)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.MinorVersion", minor_version, 0x50, 0x10, true, 0xeb26ff24c0e7332e)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GlobalFlagsClear", global_flags_clear, 0x60, 0x20, true, 0x2c5af6e250317e0e)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GlobalFlagsSet", global_flags_set, 0x80, 0x20, true, 0xd96cc588c06c150)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.CriticalSectionDefaultTimeout", critical_section_default_timeout, 0xa0, 0x20, true, 0xbd07271f9409596d)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.DeCommitFreeBlockThreshold", de_commit_free_block_threshold, 0xc0, 0x40, true, 0x913d75be1a332596)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.DeCommitTotalFreeThreshold", de_commit_total_free_threshold, 0x100, 0x40, true, 0xb85eccaa9bce3d7c)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.LockPrefixTable", lock_prefix_table, 0x140, 0x40, true, 0x4d433c420d3a19c6)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.MaximumAllocationSize", maximum_allocation_size, 0x180, 0x40, true, 0xd881250166149d7f)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.VirtualMemoryThreshold", virtual_memory_threshold, 0x1c0, 0x40, true, 0xa47d1086ba5bc9b2)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.ProcessAffinityMask", process_affinity_mask, 0x200, 0x40, true, 0x83a53798776fb9ca)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.ProcessHeapFlags", process_heap_flags, 0x240, 0x20, true, 0xf08c6b632938cc83)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.CSDVersion", csd_version, 0x260, 0x10, true, 0x4990dc666318c74c)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.DependentLoadFlags", dependent_load_flags, 0x270, 0x10, true, 0xc56dd59f1367afe2)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.EditList", edit_list, 0x280, 0x40, true, 0xa6507cb92a57ab34)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.SecurityCookie", security_cookie, 0x2c0, 0x40, true, 0xb64b1b4d05bd39f)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.SEHandlerTable", se_handler_table, 0x300, 0x40, true, 0x1463d94866082875)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.SEHandlerCount", se_handler_count, 0x340, 0x40, true, 0xafe740d036f2cc02)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardCFCheckFunctionPointer", guard_cf_check_function_pointer, 0x380, 0x40, true, 0x9beaa38a3add3a81)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardCFDispatchFunctionPointer", guard_cf_dispatch_function_pointer, 0x3c0, 0x40, true, 0x56964c1a26f595ac)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardCFFunctionTable", guard_cf_function_table, 0x400, 0x40, true, 0xed9ff4c70a59e978)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardCFFunctionCount", guard_cf_function_count, 0x440, 0x40, true, 0x840946fdcfa451f0)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardFlags", guard_flags, 0x480, 0x20, true, 0x803ac9d8d8b2cfe5)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct image::load_config_code_integrity_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.CodeIntegrity", code_integrity, 0x4a0, 0x60, true, 0x73d6567347f2014d)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardAddressTakenIatEntryTable", guard_address_taken_iat_entry_table, 0x500, 0x40, true, 0x4d92d0f3991bfd1b)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardAddressTakenIatEntryCount", guard_address_taken_iat_entry_count, 0x540, 0x40, true, 0xc5b34d8b8da73913)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardLongJumpTargetTable", guard_long_jump_target_table, 0x580, 0x40, true, 0xe6302af25da7b604)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardLongJumpTargetCount", guard_long_jump_target_count, 0x5c0, 0x40, true, 0x93aa89e461281987)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.DynamicValueRelocTable", dynamic_value_reloc_table, 0x600, 0x40, true, 0x455de1fd371aca67)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.CHPEMetadataPointer", chpe_metadata_pointer, 0x640, 0x40, true, 0xb610e7283a1216cf)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardRFFailureRoutine", guard_rf_failure_routine, 0x680, 0x40, true, 0xb6083c308a9efc02)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardRFFailureRoutineFunctionPointer", guard_rf_failure_routine_function_pointer, 0x6c0, 0x40, true, 0xf79b7d9102b839e3)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.DynamicValueRelocTableOffset", dynamic_value_reloc_table_offset, 0x700, 0x20, true, 0xe8e6fbc8685d01cd)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.DynamicValueRelocTableSection", dynamic_value_reloc_table_section, 0x720, 0x10, true, 0x3c7b4c301a727267)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardRFVerifyStackPointerFunctionPointer", guard_rf_verify_stack_pointer_function_pointer, 0x740, 0x40, true, 0x2ff44dd38acacb59)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.HotPatchTableOffset", hot_patch_table_offset, 0x780, 0x20, true, 0xb630020a76e58953)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.EnclaveConfigurationPointer", enclave_configuration_pointer, 0x7c0, 0x40, true, 0xd359f7a33bcade95)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.VolatileMetadataPointer", volatile_metadata_pointer, 0x800, 0x40, true, 0xcdccc392b3a30890)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardEHContinuationTable", guard_eh_continuation_table, 0x840, 0x40, true, 0xbc0676ab962ea456)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardEHContinuationCount", guard_eh_continuation_count, 0x880, 0x40, true, 0xbfc7829763b8bcf3)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.HybridMetadataPointer", hybrid_metadata_pointer, 0x640, 0x40, true, 0x261b2b8f8e211a0e)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardXFGCheckFunctionPointer", guard_xfg_check_function_pointer, 0x8c0, 0x40, true, 0xdc3088c63094f0c1)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardXFGDispatchFunctionPointer", guard_xfg_dispatch_function_pointer, 0x900, 0x40, true, 0x1ce6c5f2c889da04)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardXFGTableDispatchFunctionPointer", guard_xfg_table_dispatch_function_pointer, 0x940, 0x40, true, 0x65720eb473f4a126)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_LOAD_CONFIG_DIRECTORY64.CastGuardOsDeterminedFailureMode", cast_guard_os_determined_failure_mode, 0x980, 0x40, true, 0x48d98b0e30e6bf3d)
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