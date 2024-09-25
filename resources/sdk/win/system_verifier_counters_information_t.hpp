#pragma once
#include <sdkgen/support_library.hpp>
#include "system_verifier_information_t.hpp"

#include "magic/system_verifier_counters_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_VERIFIER_COUNTERS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_verifier_counters_information_t                                      
    {                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                             
        _m00 struct win::system_verifier_information_t legacy;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Legacy
        _m01 uint32_t                                  raise_irqls;                      //{ +0x0080    +0x0090    +0x0090    +0x0090    } | .RaiseIrqls
        _m02 uint32_t                                  acquire_spin_locks;               //{ +0x0084    +0x0094    +0x0094    +0x0094    } | .AcquireSpinLocks
        _m03 uint32_t                                  synchronize_executions;           //{ +0x0088    +0x0098    +0x0098    +0x0098    } | .SynchronizeExecutions
        _m04 uint32_t                                  allocations_with_no_tag;          //{ +0x008c    +0x009c    +0x009c    +0x009c    } | .AllocationsWithNoTag
        _m05 uint32_t                                  allocations_failed;               //{ +0x0090    +0x00a0    +0x00a0    +0x00a0    } | .AllocationsFailed
        _m06 uint32_t                                  allocations_failed_deliberately;  //{ +0x0094    +0x00a4    +0x00a4    +0x00a4    } | .AllocationsFailedDeliberately
        _m07 uint64_t                                  locked_bytes;                     //{ +0x0098    +0x00a8    +0x00a8    +0x00a8    } | .LockedBytes
        _m08 uint64_t                                  peak_locked_bytes;                //{ +0x00a0    +0x00b0    +0x00b0    +0x00b0    } | .PeakLockedBytes
        _m09 uint64_t                                  mapped_locked_bytes;              //{ +0x00a8    +0x00b8    +0x00b8    +0x00b8    } | .MappedLockedBytes
        _m10 uint64_t                                  peak_mapped_locked_bytes;         //{ +0x00b0    +0x00c0    +0x00c0    +0x00c0    } | .PeakMappedLockedBytes
        _m11 uint64_t                                  mapped_io_space_bytes;            //{ +0x00b8    +0x00c8    +0x00c8    +0x00c8    } | .MappedIoSpaceBytes
        _m12 uint64_t                                  peak_mapped_io_space_bytes;       //{ +0x00c0    +0x00d0    +0x00d0    +0x00d0    } | .PeakMappedIoSpaceBytes
        _m13 uint64_t                                  pages_for_mdl_bytes;              //{ +0x00c8    +0x00d8    +0x00d8    +0x00d8    } | .PagesForMdlBytes
        _m14 uint64_t                                  peak_pages_for_mdl_bytes;         //{ +0x00d0    +0x00e0    +0x00e0    +0x00e0    } | .PeakPagesForMdlBytes
        _m15 uint64_t                                  contiguous_memory_bytes;          //{ +0x00d8    +0x00e8    +0x00e8    +0x00e8    } | .ContiguousMemoryBytes
        _m16 uint64_t                                  peak_contiguous_memory_bytes;     //{ +0x00e0    +0x00f0    +0x00f0    +0x00f0    } | .PeakContiguousMemoryBytes
        _m17 uint32_t                                  execute_pool_types;               //{ +0x00e8    +0x00f8    +0x00f8    +0x00f8    } | .ExecutePoolTypes
        _m18 uint32_t                                  execute_page_protections;         //{ +0x00ec    +0x00fc    +0x00fc    +0x00fc    } | .ExecutePageProtections
        _m19 uint32_t                                  execute_page_mappings;            //{ +0x00f0    +0x0100    +0x0100    +0x0100    } | .ExecutePageMappings
        _m20 uint32_t                                  execute_write_sections;           //{ +0x00f4    +0x0104    +0x0104    +0x0104    } | .ExecuteWriteSections
        _m21 uint32_t                                  section_alignment_failures;       //{ +0x00f8    +0x0108    +0x0108    +0x0108    } | .SectionAlignmentFailures
        _m22 uint32_t                                  iat_in_executable_section;        //{ +0x0100    +0x010c    +0x010c    +0x010c    } | .IATInExecutableSection
                                                                                       
        // Windows 10 v1607                                                            
        //                                                                             
        _m23 uint32_t                                  unsupported_relocs;               //{ +0x00fc    } | .UnsupportedRelocs
                                                                                       
        SDK_MAGIC_PROPERTIES( "_SYSTEM_VERIFIER_COUNTERS_INFORMATION.$", 0x110, true, 0x4e00d6bc28b4f5f9 );                                
        SDK_DYNAMIC_SIZE( system_verifier_counters_information_t );                                
    };                                                                                 
};
#include "magic/system_verifier_counters_information_t.end.hpp"
