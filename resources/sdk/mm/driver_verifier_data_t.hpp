#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_verifier_data_t.start.hpp"
namespace mm
{
    // [struct _MM_DRIVER_VERIFIER_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct driver_verifier_data_t                                     
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                            
        _m000 uint32_t          level;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Level
        _m001 volatile uint32_t raise_irqls;                            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RaiseIrqls
        _m002 volatile uint32_t acquire_spin_locks;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AcquireSpinLocks
        _m003 volatile uint32_t synchronize_executions;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SynchronizeExecutions
        _m004 volatile uint32_t allocations_attempted;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocationsAttempted
        _m005 volatile uint32_t allocations_succeeded;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .AllocationsSucceeded
        _m006 volatile uint32_t allocations_succeeded_special_pool;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AllocationsSucceededSpecialPool
        _m007 uint32_t          allocations_with_no_tag;                //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .AllocationsWithNoTag
        _m008 uint32_t          trim_requests;                          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TrimRequests
        _m009 uint32_t          trims;                                  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Trims
        _m010 uint32_t          allocations_failed;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AllocationsFailed
        _m011 volatile uint32_t allocations_failed_deliberately;        //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .AllocationsFailedDeliberately
        _m012 volatile uint32_t loads;                                  //{ +0x0030    +0x0030    +0x0034    +0x0030    } | .Loads
        _m013 volatile uint32_t unloads;                                //{ +0x0034    +0x0034    +0x0038    +0x0034    } | .Unloads
        _m014 uint32_t          un_tracked_pool;                        //{ +0x0038    +0x0038    +0x003c    +0x0038    } | .UnTrackedPool
        _m015 uint32_t          user_trims;                             //{ +0x003c    +0x003c    +0x0040    +0x003c    } | .UserTrims
        _m016 volatile uint32_t current_paged_pool_allocations;         //{ +0x0040    +0x0040    +0x0044    +0x0040    } | .CurrentPagedPoolAllocations
        _m017 volatile uint32_t current_non_paged_pool_allocations;     //{ +0x0044    +0x0044    +0x0048    +0x0044    } | .CurrentNonPagedPoolAllocations
        _m018 uint32_t          peak_paged_pool_allocations;            //{ +0x0048    +0x0048    +0x004c    +0x0048    } | .PeakPagedPoolAllocations
        _m019 uint32_t          peak_non_paged_pool_allocations;        //{ +0x004c    +0x004c    +0x0050    +0x004c    } | .PeakNonPagedPoolAllocations
        _m020 volatile uint64_t paged_bytes;                            //{ +0x0050    +0x0050    +0x0058    +0x0050    } | .PagedBytes
        _m021 volatile uint64_t non_paged_bytes;                        //{ +0x0058    +0x0058    +0x0060    +0x0058    } | .NonPagedBytes
        _m022 uint64_t          peak_paged_bytes;                       //{ +0x0060    +0x0060    +0x0068    +0x0060    } | .PeakPagedBytes
        _m023 uint64_t          peak_non_paged_bytes;                   //{ +0x0068    +0x0068    +0x0070    +0x0068    } | .PeakNonPagedBytes
        _m024 volatile uint32_t burst_allocations_failed_deliberately;  //{ +0x0070    +0x0070    +0x0078    +0x0070    } | .BurstAllocationsFailedDeliberately
        _m025 uint32_t          session_trims;                          //{ +0x0074    +0x0074    +0x007c    +0x0074    } | .SessionTrims
        _m026 volatile uint32_t option_changes;                         //{ +0x0078    +0x0078    +0x0080    +0x0078    } | .OptionChanges
        _m027 volatile uint32_t verify_mode;                            //{ +0x007c    +0x007c    +0x0084    +0x007c    } | .VerifyMode
        _m028 nt::unicode_view  previous_bucket_name;                   //{ +0x0080    +0x0080    +0x0088    +0x0080    } | .PreviousBucketName
        _m029 volatile uint32_t execute_pool_types;                     //{ +0x0090    +0x0090    +0x0098    +0x0090    } | .ExecutePoolTypes
        _m030 volatile uint32_t execute_page_protections;               //{ +0x0094    +0x0094    +0x009c    +0x0094    } | .ExecutePageProtections
        _m031 volatile uint32_t execute_page_mappings;                  //{ +0x0098    +0x0098    +0x00a0    +0x0098    } | .ExecutePageMappings
        _m032 volatile uint32_t execute_write_sections;                 //{ +0x009c    +0x009c    +0x00a4    +0x009c    } | .ExecuteWriteSections
        _m033 volatile uint32_t section_alignment_failures;             //{ +0x00a0    +0x00a0    +0x00a8    +0x00a0    } | .SectionAlignmentFailures
        _m034 volatile uint32_t iat_in_executable_section;              //{ +0x00a8    +0x00a4    +0x00ac    +0x00a4    } | .IATInExecutableSection
                                                                      
        // Windows 10 v1607                                           
        //                                                            
        _m035 volatile uint32_t unsupported_relocs;                     //{ +0x00a4    } | .UnsupportedRelocs
                                                                      
        // Windows 11                                                 
        //                                                            
        _m036 volatile uint32_t allocation_freed;                       //{ +0x0030    } | .AllocationFreed
                                                                      
        SDK_MAGIC_PROPERTIES( "_MM_DRIVER_VERIFIER_DATA.$", 0xa8, true, 0x79bf01ff3ed76ef6 );                                      
        SDK_DYNAMIC_SIZE( driver_verifier_data_t );                                      
    };                                                                
};
#include "magic/driver_verifier_data_t.end.hpp"
