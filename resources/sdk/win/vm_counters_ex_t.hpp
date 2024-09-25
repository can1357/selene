#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vm_counters_ex_t.start.hpp"
namespace win
{
    // [struct _VM_COUNTERS_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vm_counters_ex_t                           
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint64_t peak_virtual_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PeakVirtualSize
        _m01 uint64_t virtual_size;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .VirtualSize
        _m02 uint32_t page_fault_count;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PageFaultCount
        _m03 uint64_t peak_working_set_size;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .PeakWorkingSetSize
        _m04 uint64_t working_set_size;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .WorkingSetSize
        _m05 uint64_t quota_peak_paged_pool_usage;      //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .QuotaPeakPagedPoolUsage
        _m06 uint64_t quota_paged_pool_usage;           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .QuotaPagedPoolUsage
        _m07 uint64_t quota_peak_non_paged_pool_usage;  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .QuotaPeakNonPagedPoolUsage
        _m08 uint64_t quota_non_paged_pool_usage;       //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .QuotaNonPagedPoolUsage
        _m09 uint64_t pagefile_usage;                   //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .PagefileUsage
        _m10 uint64_t peak_pagefile_usage;              //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .PeakPagefileUsage
        _m11 uint64_t private_usage;                    //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .PrivateUsage
                                                      
        SDK_NONVOL_PROPERTIES( "_VM_COUNTERS_EX.$", 0x60, true, 0x56f5cdfa2e9c5901 );                                
        SDK_FIXED_SIZE( vm_counters_ex_t, 0x60 );                                
    };                                                
};
#include "magic/vm_counters_ex_t.end.hpp"
SDK_VERIFY( struct win::vm_counters_ex_t, 0x60 );
