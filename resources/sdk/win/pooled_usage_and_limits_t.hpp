#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pooled_usage_and_limits_t.start.hpp"
namespace win
{
    // [struct _POOLED_USAGE_AND_LIMITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pooled_usage_and_limits_t            
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint64_t peak_paged_pool_usage;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PeakPagedPoolUsage
        _m01 uint64_t paged_pool_usage;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PagedPoolUsage
        _m02 uint64_t paged_pool_limit;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PagedPoolLimit
        _m03 uint64_t peak_non_paged_pool_usage;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .PeakNonPagedPoolUsage
        _m04 uint64_t non_paged_pool_usage;       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NonPagedPoolUsage
        _m05 uint64_t non_paged_pool_limit;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .NonPagedPoolLimit
        _m06 uint64_t peak_pagefile_usage;        //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .PeakPagefileUsage
        _m07 uint64_t pagefile_usage;             //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .PagefileUsage
        _m08 uint64_t pagefile_limit;             //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .PagefileLimit
                                                
        SDK_NONVOL_PROPERTIES( "_POOLED_USAGE_AND_LIMITS.$", 0x48, true, 0x5fc378bb2b205c4d );                          
        SDK_FIXED_SIZE( pooled_usage_and_limits_t, 0x48 );                          
    };                                          
};
#include "magic/pooled_usage_and_limits_t.end.hpp"
SDK_VERIFY( struct win::pooled_usage_and_limits_t, 0x48 );
