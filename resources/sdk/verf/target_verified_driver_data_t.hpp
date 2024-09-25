#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"

#include "magic/target_verified_driver_data_t.start.hpp"
namespace verf
{
    struct suspect_driver_entry_t;

    // [struct _VF_TARGET_VERIFIED_DRIVER_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct target_verified_driver_data_t                                                   
    {                                                                                      
        struct u0_flags_t                                                                  
        {                                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
            //                                                                             
            _m03 uint1_t missed_etw_registration;                                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MissedEtwRegistration
                                                                                           
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
            //                                                                             
            _m04 uint1_t is_boot_driver;                                                     //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .IsBootDriver
                                                                                           
            SDK_MAGIC_PROPERTIES( "_VF_TARGET_VERIFIED_DRIVER_DATA.Flags.$", 0x4, true, 0xda3bf6c45cbdc0aa );                                                                
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                                
        };                                                                                 
                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                 
        _m000 struct verf::suspect_driver_entry_t* suspect_driver_entry;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SuspectDriverEntry
        _m001 void*                                wmi_callback;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WMICallback
        _m002 nt::list_entry_t                     etw_handles_list_head;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EtwHandlesListHead
        _m005 u0_flags_t                           flags;                                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
        _m006 uint32_t                             whole;                                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Whole
        _m007 uint64_t                             signature;                                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Signature
        _m008 union nt::slist_header_t             pool_page_headers;                        //{ +0x0030    +0x0040    +0x0040    +0x0040    } | .PoolPageHeaders
        _m009 union nt::slist_header_t             pool_trackers;                            //{ +0x0040    +0x0050    +0x0050    +0x0050    } | .PoolTrackers
        _m010 volatile uint32_t                    current_paged_pool_allocations;           //{ +0x0050    +0x0068    +0x0070    +0x0068    } | .CurrentPagedPoolAllocations
        _m011 volatile uint32_t                    current_non_paged_pool_allocations;       //{ +0x0054    +0x006c    +0x0074    +0x006c    } | .CurrentNonPagedPoolAllocations
        _m012 uint32_t                             peak_paged_pool_allocations;              //{ +0x0058    +0x0070    +0x0078    +0x0070    } | .PeakPagedPoolAllocations
        _m013 uint32_t                             peak_non_paged_pool_allocations;          //{ +0x005c    +0x0074    +0x007c    +0x0074    } | .PeakNonPagedPoolAllocations
        _m014 volatile uint64_t                    paged_bytes;                              //{ +0x0060    +0x0078    +0x0080    +0x0078    } | .PagedBytes
        _m015 volatile uint64_t                    non_paged_bytes;                          //{ +0x0068    +0x0080    +0x0088    +0x0080    } | .NonPagedBytes
        _m016 uint64_t                             peak_paged_bytes;                         //{ +0x0070    +0x0088    +0x0090    +0x0088    } | .PeakPagedBytes
        _m017 uint64_t                             peak_non_paged_bytes;                     //{ +0x0078    +0x0090    +0x0098    +0x0090    } | .PeakNonPagedBytes
        _m018 uint32_t                             raise_irqls;                              //{ +0x0080    +0x0098    +0x00a0    +0x0098    } | .RaiseIrqls
        _m019 uint32_t                             acquire_spin_locks;                       //{ +0x0084    +0x009c    +0x00a4    +0x009c    } | .AcquireSpinLocks
        _m020 uint32_t                             synchronize_executions;                   //{ +0x0088    +0x00a0    +0x00a8    +0x00a0    } | .SynchronizeExecutions
        _m021 uint32_t                             allocations_with_no_tag;                  //{ +0x008c    +0x00a4    +0x00ac    +0x00a4    } | .AllocationsWithNoTag
        _m022 uint32_t                             allocations_failed;                       //{ +0x0090    +0x00a8    +0x00b0    +0x00a8    } | .AllocationsFailed
        _m023 uint32_t                             allocations_failed_deliberately;          //{ +0x0094    +0x00ac    +0x00b4    +0x00ac    } | .AllocationsFailedDeliberately
        _m024 uint64_t                             locked_bytes;                             //{ +0x0098    +0x00b0    +0x00b8    +0x00b0    } | .LockedBytes
        _m025 uint64_t                             peak_locked_bytes;                        //{ +0x00a0    +0x00b8    +0x00c0    +0x00b8    } | .PeakLockedBytes
        _m026 uint64_t                             mapped_locked_bytes;                      //{ +0x00a8    +0x00c0    +0x00c8    +0x00c0    } | .MappedLockedBytes
        _m027 uint64_t                             peak_mapped_locked_bytes;                 //{ +0x00b0    +0x00c8    +0x00d0    +0x00c8    } | .PeakMappedLockedBytes
        _m028 uint64_t                             mapped_io_space_bytes;                    //{ +0x00b8    +0x00d0    +0x00d8    +0x00d0    } | .MappedIoSpaceBytes
        _m029 uint64_t                             peak_mapped_io_space_bytes;               //{ +0x00c0    +0x00d8    +0x00e0    +0x00d8    } | .PeakMappedIoSpaceBytes
        _m030 uint64_t                             pages_for_mdl_bytes;                      //{ +0x00c8    +0x00e0    +0x00e8    +0x00e0    } | .PagesForMdlBytes
        _m031 uint64_t                             peak_pages_for_mdl_bytes;                 //{ +0x00d0    +0x00e8    +0x00f0    +0x00e8    } | .PeakPagesForMdlBytes
        _m032 uint64_t                             contiguous_memory_bytes;                  //{ +0x00d8    +0x00f0    +0x00f8    +0x00f0    } | .ContiguousMemoryBytes
        _m033 uint64_t                             peak_contiguous_memory_bytes;             //{ +0x00e0    +0x00f8    +0x0100    +0x00f8    } | .PeakContiguousMemoryBytes
        _m034 nt::list_entry_t                     contiguous_memory_list_head;              //{ +0x00e8    +0x0100    +0x0108    +0x0100    } | .ContiguousMemoryListHead
        _m035 volatile uint32_t                    execute_pool_types;                       //{ +0x00f8    +0x0110    +0x0118    +0x0110    } | .ExecutePoolTypes
        _m036 volatile uint32_t                    execute_page_protections;                 //{ +0x00fc    +0x0114    +0x011c    +0x0114    } | .ExecutePageProtections
        _m037 volatile uint32_t                    execute_page_mappings;                    //{ +0x0100    +0x0118    +0x0120    +0x0118    } | .ExecutePageMappings
        _m038 volatile uint32_t                    execute_write_sections;                   //{ +0x0104    +0x011c    +0x0124    +0x011c    } | .ExecuteWriteSections
        _m039 volatile uint32_t                    section_alignment_failures;               //{ +0x0108    +0x0120    +0x0128    +0x0120    } | .SectionAlignmentFailures
        _m040 volatile uint32_t                    iat_in_executable_section;                //{ +0x0110    +0x0124    +0x012c    +0x0124    } | .IATInExecutableSection
                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                 
        _m041 uint8_t                              se_signing_level;                         //{ +0x0030    +0x0030    +0x0030    } | .SeSigningLevel
                                                                                           
        // Windows 10 v2004, Windows 10 v20H2                                              
        //                                                                                 
        _m042 void**                               dif_plugin_data;                          //{ +0x0060    +0x0060    } | .DifPluginData
                                                                                           
        // Windows 11                                                                      
        //                                                                                 
        _m043 nt::list_entry_t                     dif_plugin_per_driver_data_context_head;  //{ +0x0060    } | .DifPluginPerDriverDataContextHead
                                                                                           
        // Windows 10 v1607                                                                
        //                                                                                 
        _m044 volatile uint32_t                    unsupported_relocs;                       //{ +0x010c    } | .UnsupportedRelocs
                                                                                           
        SDK_MAGIC_PROPERTIES( "_VF_TARGET_VERIFIED_DRIVER_DATA.$", 0x130, true, 0x9179f4bb3247319c );                                        
        SDK_DYNAMIC_SIZE( target_verified_driver_data_t );                                        
    };                                                                                     
};
#include "magic/target_verified_driver_data_t.end.hpp"
SDK_VERIFY( struct verf::target_verified_driver_data_t::u0_flags_t, 0x4 );
