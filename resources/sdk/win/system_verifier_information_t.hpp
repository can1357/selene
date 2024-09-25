#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_verifier_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_VERIFIER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_verifier_information_t                                                   
    {                                                                                      
        struct u0_flags_t                                                                  
        {                                                                                  
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
            //                                                                             
            _m27 uint1_t are_all_drivers_being_verified;                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .AreAllDriversBeingVerified
            _m28 uint1_t disabled_from_crash;                                                //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .DisabledFromCrash
                                                                                           
            SDK_MAGIC_PROPERTIES( "_SYSTEM_VERIFIER_INFORMATION.Flags.$", 0x4, true, 0x7544dc1bcfbe365c );                                                                  
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                                  
        };                                                                                 
                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                 
        _m000 uint32_t                                  next_entry_offset;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m001 uint32_t                                  level;                               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Level
        _m002 nt::unicode_view                          driver_name;                         //{ +0x0008    +0x0018    +0x0018    +0x0018    } | .DriverName
        _m003 uint32_t                                  raise_irqls;                         //{ +0x0018    +0x0028    +0x0028    +0x0028    } | .RaiseIrqls
        _m004 uint32_t                                  acquire_spin_locks;                  //{ +0x001c    +0x002c    +0x002c    +0x002c    } | .AcquireSpinLocks
        _m005 uint32_t                                  synchronize_executions;              //{ +0x0020    +0x0030    +0x0030    +0x0030    } | .SynchronizeExecutions
        _m006 uint32_t                                  allocations_attempted;               //{ +0x0024    +0x0034    +0x0034    +0x0034    } | .AllocationsAttempted
        _m007 uint32_t                                  allocations_succeeded;               //{ +0x0028    +0x0038    +0x0038    +0x0038    } | .AllocationsSucceeded
        _m008 uint32_t                                  allocations_succeeded_special_pool;  //{ +0x002c    +0x003c    +0x003c    +0x003c    } | .AllocationsSucceededSpecialPool
        _m009 uint32_t                                  allocations_with_no_tag;             //{ +0x0030    +0x0040    +0x0040    +0x0040    } | .AllocationsWithNoTag
        _m010 uint32_t                                  trim_requests;                       //{ +0x0034    +0x0044    +0x0044    +0x0044    } | .TrimRequests
        _m011 uint32_t                                  trims;                               //{ +0x0038    +0x0048    +0x0048    +0x0048    } | .Trims
        _m012 uint32_t                                  allocations_failed;                  //{ +0x003c    +0x004c    +0x004c    +0x004c    } | .AllocationsFailed
        _m013 uint32_t                                  allocations_failed_deliberately;     //{ +0x0040    +0x0050    +0x0050    +0x0050    } | .AllocationsFailedDeliberately
        _m014 uint32_t                                  loads;                               //{ +0x0044    +0x0054    +0x0054    +0x0054    } | .Loads
        _m015 uint32_t                                  unloads;                             //{ +0x0048    +0x0058    +0x0058    +0x0058    } | .Unloads
        _m016 uint32_t                                  un_tracked_pool;                     //{ +0x004c    +0x005c    +0x005c    +0x005c    } | .UnTrackedPool
        _m017 uint32_t                                  current_paged_pool_allocations;      //{ +0x0050    +0x0060    +0x0060    +0x0060    } | .CurrentPagedPoolAllocations
        _m018 uint32_t                                  current_non_paged_pool_allocations;  //{ +0x0054    +0x0064    +0x0064    +0x0064    } | .CurrentNonPagedPoolAllocations
        _m019 uint32_t                                  peak_paged_pool_allocations;         //{ +0x0058    +0x0068    +0x0068    +0x0068    } | .PeakPagedPoolAllocations
        _m020 uint32_t                                  peak_non_paged_pool_allocations;     //{ +0x005c    +0x006c    +0x006c    +0x006c    } | .PeakNonPagedPoolAllocations
        _m021 uint64_t                                  paged_pool_usage_in_bytes;           //{ +0x0060    +0x0070    +0x0070    +0x0070    } | .PagedPoolUsageInBytes
        _m022 uint64_t                                  non_paged_pool_usage_in_bytes;       //{ +0x0068    +0x0078    +0x0078    +0x0078    } | .NonPagedPoolUsageInBytes
        _m023 uint64_t                                  peak_paged_pool_usage_in_bytes;      //{ +0x0070    +0x0080    +0x0080    +0x0080    } | .PeakPagedPoolUsageInBytes
        _m024 uint64_t                                  peak_non_paged_pool_usage_in_bytes;  //{ +0x0078    +0x0088    +0x0088    +0x0088    } | .PeakNonPagedPoolUsageInBytes
                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                 
        _m025 sdk::array<uint32_t, 2>                   rule_classes;                        //{ +0x0008    +0x0008    +0x0008    } | .RuleClasses
        _m026 uint32_t                                  triage_context;                      //{ +0x0010    +0x0010    +0x0010    } | .TriageContext
        _m029 u0_flags_t                                flags;                               //{ +0x0014    +0x0014    +0x0014    } | .Flags
        _m030 uint32_t                                  whole;                               //{ +0x0014    +0x0014    +0x0014    } | .Whole
                                                                                           
        SDK_MAGIC_PROPERTIES( "_SYSTEM_VERIFIER_INFORMATION.$", 0x90, true, 0xc43c335668cc3897 );                                   
        SDK_DYNAMIC_SIZE( system_verifier_information_t );                                   
    };                                                                                     
};
#include "magic/system_verifier_information_t.end.hpp"
SDK_VERIFY( struct win::system_verifier_information_t::u0_flags_t, 0x4 );
