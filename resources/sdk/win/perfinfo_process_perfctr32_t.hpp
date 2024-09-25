#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_process_perfctr32_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PROCESS_PERFCTR32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_process_perfctr32_t               
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t process_id;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 uint32_t page_fault_count;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PageFaultCount
        _m02 uint32_t handle_count;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleCount
        _m03 uint32_t peak_virtual_size;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PeakVirtualSize
        _m04 uint32_t peak_working_set_size;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PeakWorkingSetSize
        _m05 uint32_t peak_pagefile_usage;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PeakPagefileUsage
        _m06 uint32_t quota_peak_paged_pool_usage;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .QuotaPeakPagedPoolUsage
        _m07 uint32_t quota_peak_non_paged_pool_usage;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .QuotaPeakNonPagedPoolUsage
        _m08 uint32_t virtual_size;                     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .VirtualSize
        _m09 uint32_t working_set_size;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .WorkingSetSize
        _m10 uint32_t pagefile_usage;                   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .PagefileUsage
        _m11 uint32_t quota_paged_pool_usage;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .QuotaPagedPoolUsage
        _m12 uint32_t quota_non_paged_pool_usage;       //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .QuotaNonPagedPoolUsage
        _m13 uint32_t private_page_count;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PrivatePageCount
                                                      
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PROCESS_PERFCTR32.$", 0x3c, true, 0xa6e413933d3f81c8 );                                
        SDK_FIXED_SIZE( perfinfo_process_perfctr32_t, 0x3c );                                
    };                                                
};
#include "magic/perfinfo_process_perfctr32_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_process_perfctr32_t, 0x3c );
