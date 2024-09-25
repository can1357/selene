#pragma once
#include <sdkgen/support_library.hpp>
#include "../image/load_config_code_integrity_t.hpp"

#include "magic/rs5_image_load_config_directory64_t.start.hpp"
namespace nt
{
    // [struct _RS5_IMAGE_LOAD_CONFIG_DIRECTORY64]
    // => WDK 10 (NV)
    //
    struct rs5_image_load_config_directory64_t                                                          
    {                                                                                                   
        // WDK 10                                                                                       
        //                                                                                              
        _m000 uint32_t                                   size;                                            //{ +0x0000    } | .Size
        _m001 uint32_t                                   time_date_stamp;                                 //{ +0x0004    } | .TimeDateStamp
        _m002 uint16_t                                   major_version;                                   //{ +0x0008    } | .MajorVersion
        _m003 uint16_t                                   minor_version;                                   //{ +0x000a    } | .MinorVersion
        _m004 uint32_t                                   global_flags_clear;                              //{ +0x000c    } | .GlobalFlagsClear
        _m005 uint32_t                                   global_flags_set;                                //{ +0x0010    } | .GlobalFlagsSet
        _m006 uint32_t                                   critical_section_default_timeout;                //{ +0x0014    } | .CriticalSectionDefaultTimeout
        _m007 uint64_t                                   de_commit_free_block_threshold;                  //{ +0x0018    } | .DeCommitFreeBlockThreshold
        _m008 uint64_t                                   de_commit_total_free_threshold;                  //{ +0x0020    } | .DeCommitTotalFreeThreshold
        _m009 uint64_t                                   lock_prefix_table;                               //{ +0x0028    } | .LockPrefixTable
        _m010 uint64_t                                   maximum_allocation_size;                         //{ +0x0030    } | .MaximumAllocationSize
        _m011 uint64_t                                   virtual_memory_threshold;                        //{ +0x0038    } | .VirtualMemoryThreshold
        _m012 uint64_t                                   process_affinity_mask;                           //{ +0x0040    } | .ProcessAffinityMask
        _m013 uint32_t                                   process_heap_flags;                              //{ +0x0048    } | .ProcessHeapFlags
        _m014 uint16_t                                   csd_version;                                     //{ +0x004c    } | .CSDVersion
        _m015 uint16_t                                   dependent_load_flags;                            //{ +0x004e    } | .DependentLoadFlags
        _m016 uint64_t                                   edit_list;                                       //{ +0x0050    } | .EditList
        _m017 uint64_t                                   security_cookie;                                 //{ +0x0058    } | .SecurityCookie
        _m018 uint64_t                                   se_handler_table;                                //{ +0x0060    } | .SEHandlerTable
        _m019 uint64_t                                   se_handler_count;                                //{ +0x0068    } | .SEHandlerCount
        _m020 uint64_t                                   guard_cf_check_function_pointer;                 //{ +0x0070    } | .GuardCFCheckFunctionPointer
        _m021 uint64_t                                   guard_cf_dispatch_function_pointer;              //{ +0x0078    } | .GuardCFDispatchFunctionPointer
        _m022 uint64_t                                   guard_cf_function_table;                         //{ +0x0080    } | .GuardCFFunctionTable
        _m023 uint64_t                                   guard_cf_function_count;                         //{ +0x0088    } | .GuardCFFunctionCount
        _m024 uint32_t                                   guard_flags;                                     //{ +0x0090    } | .GuardFlags
        _m025 struct image::load_config_code_integrity_t code_integrity;                                  //{ +0x0094    } | .CodeIntegrity
        _m026 uint64_t                                   guard_address_taken_iat_entry_table;             //{ +0x00a0    } | .GuardAddressTakenIatEntryTable
        _m027 uint64_t                                   guard_address_taken_iat_entry_count;             //{ +0x00a8    } | .GuardAddressTakenIatEntryCount
        _m028 uint64_t                                   guard_long_jump_target_table;                    //{ +0x00b0    } | .GuardLongJumpTargetTable
        _m029 uint64_t                                   guard_long_jump_target_count;                    //{ +0x00b8    } | .GuardLongJumpTargetCount
        _m030 uint64_t                                   dynamic_value_reloc_table;                       //{ +0x00c0    } | .DynamicValueRelocTable
        _m031 uint64_t                                   chpe_metadata_pointer;                           //{ +0x00c8    } | .CHPEMetadataPointer
        _m032 uint64_t                                   guard_rf_failure_routine;                        //{ +0x00d0    } | .GuardRFFailureRoutine
        _m033 uint64_t                                   guard_rf_failure_routine_function_pointer;       //{ +0x00d8    } | .GuardRFFailureRoutineFunctionPointer
        _m034 uint32_t                                   dynamic_value_reloc_table_offset;                //{ +0x00e0    } | .DynamicValueRelocTableOffset
        _m035 uint16_t                                   dynamic_value_reloc_table_section;               //{ +0x00e4    } | .DynamicValueRelocTableSection
        _m036 uint64_t                                   guard_rf_verify_stack_pointer_function_pointer;  //{ +0x00e8    } | .GuardRFVerifyStackPointerFunctionPointer
        _m037 uint32_t                                   hot_patch_table_offset;                          //{ +0x00f0    } | .HotPatchTableOffset
        _m038 uint64_t                                   enclave_configuration_pointer;                   //{ +0x00f8    } | .EnclaveConfigurationPointer
        _m039 uint64_t                                   volatile_metadata_pointer;                       //{ +0x0100    } | .VolatileMetadataPointer
        _m040 uint64_t                                   guard_eh_continuation_table;                     //{ +0x0108    } | .GuardEHContinuationTable
        _m041 uint64_t                                   guard_eh_continuation_count;                     //{ +0x0110    } | .GuardEHContinuationCount
        _m042 uint64_t                                   guard_xfg_check_function_pointer;                //{ +0x0118    } | .GuardXFGCheckFunctionPointer
        _m043 uint64_t                                   guard_xfg_dispatch_function_pointer;             //{ +0x0120    } | .GuardXFGDispatchFunctionPointer
        _m044 uint64_t                                   guard_xfg_table_dispatch_function_pointer;       //{ +0x0128    } | .GuardXFGTableDispatchFunctionPointer
        _m045 uint64_t                                   cast_guard_os_determined_failure_mode;           //{ +0x0130    } | .CastGuardOsDeterminedFailureMode
        _m046 uint64_t                                   guard_memcpy_function_pointer;                   //{ +0x0138    } | .GuardMemcpyFunctionPointer
                                                                                                        
        SDK_NONVOL_PROPERTIES( "_RS5_IMAGE_LOAD_CONFIG_DIRECTORY64.$", 0x0, false, 0x1980366ff1642832 );                                               
        SDK_FIXED_SIZE( rs5_image_load_config_directory64_t, 0x140 );                                               
    };                                                                                                  
};
#include "magic/rs5_image_load_config_directory64_t.end.hpp"
SDK_VERIFY( struct nt::rs5_image_load_config_directory64_t, 0x140 );
