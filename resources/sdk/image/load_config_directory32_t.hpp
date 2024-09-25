#pragma once
#include <sdkgen/support_library.hpp>
#include "load_config_code_integrity_t.hpp"

#include "magic/load_config_directory32_t.start.hpp"
namespace image
{
    // [struct _IMAGE_LOAD_CONFIG_DIRECTORY32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct load_config_directory32_t                                                                    
    {                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                              
        _m000 uint32_t                                   size;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m001 uint32_t                                   time_date_stamp;                                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TimeDateStamp
        _m002 uint16_t                                   major_version;                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MajorVersion
        _m003 uint16_t                                   minor_version;                                   //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .MinorVersion
        _m004 uint32_t                                   global_flags_clear;                              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .GlobalFlagsClear
        _m005 uint32_t                                   global_flags_set;                                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GlobalFlagsSet
        _m006 uint32_t                                   critical_section_default_timeout;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .CriticalSectionDefaultTimeout
        _m007 uint32_t                                   de_commit_free_block_threshold;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeCommitFreeBlockThreshold
        _m008 uint32_t                                   de_commit_total_free_threshold;                  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .DeCommitTotalFreeThreshold
        _m009 uint32_t                                   lock_prefix_table;                               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LockPrefixTable
        _m010 uint32_t                                   maximum_allocation_size;                         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MaximumAllocationSize
        _m011 uint32_t                                   virtual_memory_threshold;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .VirtualMemoryThreshold
        _m012 uint32_t                                   process_heap_flags;                              //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ProcessHeapFlags
        _m013 uint32_t                                   process_affinity_mask;                           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ProcessAffinityMask
        _m014 uint16_t                                   csd_version;                                     //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .CSDVersion
        _m015 uint16_t                                   dependent_load_flags;                            //{ +0x0036    +0x0036    +0x0036    +0x0036    } | .DependentLoadFlags
        _m016 uint32_t                                   edit_list;                                       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .EditList
        _m017 uint32_t                                   security_cookie;                                 //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SecurityCookie
        _m018 uint32_t                                   se_handler_table;                                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SEHandlerTable
        _m019 uint32_t                                   se_handler_count;                                //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .SEHandlerCount
        _m020 uint32_t                                   guard_cf_check_function_pointer;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .GuardCFCheckFunctionPointer
        _m021 uint32_t                                   guard_cf_dispatch_function_pointer;              //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .GuardCFDispatchFunctionPointer
        _m022 uint32_t                                   guard_cf_function_table;                         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .GuardCFFunctionTable
        _m023 uint32_t                                   guard_cf_function_count;                         //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .GuardCFFunctionCount
        _m024 uint32_t                                   guard_flags;                                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .GuardFlags
        _m025 struct image::load_config_code_integrity_t code_integrity;                                  //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .CodeIntegrity
        _m026 uint32_t                                   guard_address_taken_iat_entry_table;             //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .GuardAddressTakenIatEntryTable
        _m027 uint32_t                                   guard_address_taken_iat_entry_count;             //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .GuardAddressTakenIatEntryCount
        _m028 uint32_t                                   guard_long_jump_target_table;                    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .GuardLongJumpTargetTable
        _m029 uint32_t                                   guard_long_jump_target_count;                    //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .GuardLongJumpTargetCount
        _m030 uint32_t                                   dynamic_value_reloc_table;                       //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .DynamicValueRelocTable
                                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                              
        _m031 uint32_t                                   chpe_metadata_pointer;                           //{ +0x007c    +0x007c    +0x007c    } | .CHPEMetadataPointer
        _m032 uint32_t                                   guard_rf_failure_routine;                        //{ +0x0080    +0x0080    +0x0080    } | .GuardRFFailureRoutine
        _m033 uint32_t                                   guard_rf_failure_routine_function_pointer;       //{ +0x0084    +0x0084    +0x0084    } | .GuardRFFailureRoutineFunctionPointer
        _m034 uint32_t                                   dynamic_value_reloc_table_offset;                //{ +0x0088    +0x0088    +0x0088    } | .DynamicValueRelocTableOffset
        _m035 uint16_t                                   dynamic_value_reloc_table_section;               //{ +0x008c    +0x008c    +0x008c    } | .DynamicValueRelocTableSection
        _m036 uint32_t                                   guard_rf_verify_stack_pointer_function_pointer;  //{ +0x0090    +0x0090    +0x0090    } | .GuardRFVerifyStackPointerFunctionPointer
        _m037 uint32_t                                   hot_patch_table_offset;                          //{ +0x0094    +0x0094    +0x0094    } | .HotPatchTableOffset
        _m038 uint32_t                                   enclave_configuration_pointer;                   //{ +0x009c    +0x009c    +0x009c    } | .EnclaveConfigurationPointer
        _m039 uint32_t                                   volatile_metadata_pointer;                       //{ +0x00a0    +0x00a0    +0x00a0    } | .VolatileMetadataPointer
        _m040 uint32_t                                   guard_eh_continuation_table;                     //{ +0x00a4    +0x00a4    +0x00a4    } | .GuardEHContinuationTable
        _m041 uint32_t                                   guard_eh_continuation_count;                     //{ +0x00a8    +0x00a8    +0x00a8    } | .GuardEHContinuationCount
                                                                                                        
        // Windows 10 v1607                                                                             
        //                                                                                              
        _m042 uint32_t                                   hybrid_metadata_pointer;                         //{ +0x007c    } | .HybridMetadataPointer
                                                                                                        
        // Windows 11                                                                                   
        //                                                                                              
        _m043 uint32_t                                   guard_xfg_check_function_pointer;                //{ +0x00ac    } | .GuardXFGCheckFunctionPointer
        _m044 uint32_t                                   guard_xfg_dispatch_function_pointer;             //{ +0x00b0    } | .GuardXFGDispatchFunctionPointer
        _m045 uint32_t                                   guard_xfg_table_dispatch_function_pointer;       //{ +0x00b4    } | .GuardXFGTableDispatchFunctionPointer
        _m046 uint32_t                                   cast_guard_os_determined_failure_mode;           //{ +0x00b8    } | .CastGuardOsDeterminedFailureMode
                                                                                                        
        SDK_MAGIC_PROPERTIES( "_IMAGE_LOAD_CONFIG_DIRECTORY32.$", 0xac, true, 0x79e34b99f77f2eed );                                               
        SDK_DYNAMIC_SIZE( load_config_directory32_t );                                                  
    };                                                                                                  
};
#include "magic/load_config_directory32_t.end.hpp"
