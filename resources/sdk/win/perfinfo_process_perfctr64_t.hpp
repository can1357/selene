#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_process_perfctr64_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PROCESS_PERFCTR64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_process_perfctr64_t               
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t process_id;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 uint32_t page_fault_count;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PageFaultCount
        _m02 uint32_t handle_count;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleCount
        _m03 uint64_t peak_virtual_size;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PeakVirtualSize
        _m04 uint64_t peak_working_set_size;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PeakWorkingSetSize
        _m05 uint64_t peak_pagefile_usage;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PeakPagefileUsage
        _m06 uint64_t quota_peak_paged_pool_usage;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .QuotaPeakPagedPoolUsage
        _m07 uint64_t quota_peak_non_paged_pool_usage;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .QuotaPeakNonPagedPoolUsage
        _m08 uint64_t virtual_size;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .VirtualSize
        _m09 uint64_t working_set_size;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WorkingSetSize
        _m10 uint64_t pagefile_usage;                   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PagefileUsage
        _m11 uint64_t quota_paged_pool_usage;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .QuotaPagedPoolUsage
        _m12 uint64_t quota_non_paged_pool_usage;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .QuotaNonPagedPoolUsage
        _m13 uint64_t private_page_count;               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .PrivatePageCount
                                                      
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PROCESS_PERFCTR64.$", 0x68, true, 0xbaa03f8abfb3130c );                                
        SDK_FIXED_SIZE( perfinfo_process_perfctr64_t, 0x68 );                                
    };                                                
};
#include "magic/perfinfo_process_perfctr64_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_process_perfctr64_t, 0x68 );
