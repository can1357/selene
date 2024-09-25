#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/quota_limits_t.start.hpp"
namespace win
{
    // [struct _QUOTA_LIMITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct quota_limits_t                      
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint64_t paged_pool_limit;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PagedPoolLimit
        _m01 uint64_t non_paged_pool_limit;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NonPagedPoolLimit
        _m02 uint64_t minimum_working_set_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MinimumWorkingSetSize
        _m03 uint64_t maximum_working_set_size;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MaximumWorkingSetSize
        _m04 uint64_t pagefile_limit;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .PagefileLimit
        _m05 int64_t  time_limit;                //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .TimeLimit
                                               
        SDK_NONVOL_PROPERTIES( "_QUOTA_LIMITS.$", 0x30, true, 0x4d51568c01c373c6 );                         
        SDK_FIXED_SIZE( quota_limits_t, 0x30 );                         
    };                                         
};
#include "magic/quota_limits_t.end.hpp"
SDK_VERIFY( struct win::quota_limits_t, 0x30 );
