#pragma once
#include <sdkgen/support_library.hpp>
#include "rate_quota_limit_t.hpp"

#include "magic/quota_limits_ex_t.start.hpp"
namespace win
{
    // [struct _QUOTA_LIMITS_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct quota_limits_ex_t                                        
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                          
        _m00 uint64_t                      paged_pool_limit;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PagedPoolLimit
        _m01 uint64_t                      non_paged_pool_limit;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NonPagedPoolLimit
        _m02 uint64_t                      minimum_working_set_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MinimumWorkingSetSize
        _m03 uint64_t                      maximum_working_set_size;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MaximumWorkingSetSize
        _m04 uint64_t                      pagefile_limit;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .PagefileLimit
        _m05 int64_t                       time_limit;                //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .TimeLimit
        _m06 uint64_t                      working_set_limit;         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .WorkingSetLimit
        _m07 uint32_t                      flags;                     //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .Flags
        _m08 union win::rate_quota_limit_t cpu_rate_limit;            //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .CpuRateLimit
                                                                    
        SDK_NONVOL_PROPERTIES( "_QUOTA_LIMITS_EX.$", 0x58, true, 0xbb1a26ca94e75bc1 );                         
        SDK_FIXED_SIZE( quota_limits_ex_t, 0x58 );                         
    };                                                              
};
#include "magic/quota_limits_ex_t.end.hpp"
SDK_VERIFY( struct win::quota_limits_ex_t, 0x58 );
