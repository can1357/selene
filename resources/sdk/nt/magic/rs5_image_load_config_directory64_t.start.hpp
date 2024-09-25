#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.Size", size, 0x0, 0x20, true, 0xe2be1f69e09f3d6c)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.TimeDateStamp", time_date_stamp, 0x20, 0x20, true, 0x317b49417c9bd1a9)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.MajorVersion", major_version, 0x40, 0x10, true, 0x7feb15264f970b4c)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.MinorVersion", minor_version, 0x50, 0x10, true, 0x8c3694623ab21f46)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GlobalFlagsClear", global_flags_clear, 0x60, 0x20, true, 0x67e931b8ed86447e)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GlobalFlagsSet", global_flags_set, 0x80, 0x20, true, 0xf8b1fb434fcdfc45)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.CriticalSectionDefaultTimeout", critical_section_default_timeout, 0xa0, 0x20, true, 0x28c37a35ac88872)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.DeCommitFreeBlockThreshold", de_commit_free_block_threshold, 0xc0, 0x40, true, 0xf01e068a84d04255)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.DeCommitTotalFreeThreshold", de_commit_total_free_threshold, 0x100, 0x40, true, 0x794dcc9038fdd4b6)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.LockPrefixTable", lock_prefix_table, 0x140, 0x40, true, 0x611b1be17e9f01eb)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.MaximumAllocationSize", maximum_allocation_size, 0x180, 0x40, true, 0x21fc6ec1b04ddf0a)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.VirtualMemoryThreshold", virtual_memory_threshold, 0x1c0, 0x40, true, 0x8f1ba43fac28a702)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.ProcessAffinityMask", process_affinity_mask, 0x200, 0x40, true, 0xc2e4ccd6800a9c56)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.ProcessHeapFlags", process_heap_flags, 0x240, 0x20, true, 0x6c273323d2f53f5d)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.CSDVersion", csd_version, 0x260, 0x10, true, 0xae249cb7b6b4b079)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.DependentLoadFlags", dependent_load_flags, 0x270, 0x10, true, 0x553508ab3865597a)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.EditList", edit_list, 0x280, 0x40, true, 0x95cbdb064a3e5353)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.SecurityCookie", security_cookie, 0x2c0, 0x40, true, 0xaa3a1e85c88d0129)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.SEHandlerTable", se_handler_table, 0x300, 0x40, true, 0x20f391c699b6e38c)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.SEHandlerCount", se_handler_count, 0x340, 0x40, true, 0xa9ee53129e1d8173)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardCFCheckFunctionPointer", guard_cf_check_function_pointer, 0x380, 0x40, true, 0x2ef4d31b2055bb93)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardCFDispatchFunctionPointer", guard_cf_dispatch_function_pointer, 0x3c0, 0x40, true, 0xe8574672673c74d7)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardCFFunctionTable", guard_cf_function_table, 0x400, 0x40, true, 0x892f3c3b7c6927ed)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardCFFunctionCount", guard_cf_function_count, 0x440, 0x40, true, 0xb25d889ca6b10119)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardFlags", guard_flags, 0x480, 0x20, true, 0x2bde49a90efeed6f)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct image::load_config_code_integrity_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.CodeIntegrity", code_integrity, 0x4a0, 0x60, true, 0xcde2b776d5b077c3)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardAddressTakenIatEntryTable", guard_address_taken_iat_entry_table, 0x500, 0x40, true, 0x3032aa6f4eb7aba7)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardAddressTakenIatEntryCount", guard_address_taken_iat_entry_count, 0x540, 0x40, true, 0xd27685569ca224e5)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardLongJumpTargetTable", guard_long_jump_target_table, 0x580, 0x40, true, 0x94042a2a1d76cf2d)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardLongJumpTargetCount", guard_long_jump_target_count, 0x5c0, 0x40, true, 0x7507f875d3ef8738)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.DynamicValueRelocTable", dynamic_value_reloc_table, 0x600, 0x40, true, 0xce210f225e45abd4)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.CHPEMetadataPointer", chpe_metadata_pointer, 0x640, 0x40, true, 0x3e2ce3125bec50cd)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardRFFailureRoutine", guard_rf_failure_routine, 0x680, 0x40, true, 0x8f55b29161ff3d7a)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardRFFailureRoutineFunctionPointer", guard_rf_failure_routine_function_pointer, 0x6c0, 0x40, true, 0xef13187c55bce875)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.DynamicValueRelocTableOffset", dynamic_value_reloc_table_offset, 0x700, 0x20, true, 0xb3b0521e97f116ae)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.DynamicValueRelocTableSection", dynamic_value_reloc_table_section, 0x720, 0x10, true, 0x5dd1773d847b84f2)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardRFVerifyStackPointerFunctionPointer", guard_rf_verify_stack_pointer_function_pointer, 0x740, 0x40, true, 0xb95651f0752680d9)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.HotPatchTableOffset", hot_patch_table_offset, 0x780, 0x20, true, 0xd05e57173d2f1661)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.EnclaveConfigurationPointer", enclave_configuration_pointer, 0x7c0, 0x40, true, 0x291f07a3cac4f2ec)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.VolatileMetadataPointer", volatile_metadata_pointer, 0x800, 0x40, true, 0xb640514127c7ed9b)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardEHContinuationTable", guard_eh_continuation_table, 0x840, 0x40, true, 0xf13188ceec9f7c13)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardEHContinuationCount", guard_eh_continuation_count, 0x880, 0x40, true, 0x5b6ecb5066cb1c00)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardXFGCheckFunctionPointer", guard_xfg_check_function_pointer, 0x8c0, 0x40, true, 0xf1aba1fe696af045)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardXFGDispatchFunctionPointer", guard_xfg_dispatch_function_pointer, 0x900, 0x40, true, 0xba9f28c5a9c03392)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardXFGTableDispatchFunctionPointer", guard_xfg_table_dispatch_function_pointer, 0x940, 0x40, true, 0x426f376c22a284a9)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.CastGuardOsDeterminedFailureMode", cast_guard_os_determined_failure_mode, 0x980, 0x40, true, 0xc55ecccb6899f3fd)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.GuardMemcpyFunctionPointer", guard_memcpy_function_pointer, 0x9c0, 0x40, true, 0xbc15b518b983f623)
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