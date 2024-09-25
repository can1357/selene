#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rm_resource_limit_flags_t.start.hpp"
namespace win
{
    // [union _RM_RESOURCE_LIMIT_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union rm_resource_limit_flags_t            
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint2_t  execution_speed;           //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .ExecutionSpeed
        _m01 uint1_t  enable_hard_cpu_cap;       //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .EnableHardCpuCap
        _m02 uint1_t  monitor_gpu_interference;  //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .MonitorGpuInterference
        _m03 uint1_t  user_defined_limits;       //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .UserDefinedLimits
        _m04 uint1_t  take_maximum;              //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .TakeMaximum
        _m05 uint32_t all;                       //{ +0x0000    +0x0000    +0x0000    } | .All
                                               
        SDK_MAGIC_PROPERTIES( "_RM_RESOURCE_LIMIT_FLAGS.$", 0x4, true, 0x7df678a9609241e8 );                         
        SDK_FIXED_SIZE( rm_resource_limit_flags_t, 0x4 );                         
    };                                         
};
#include "magic/rm_resource_limit_flags_t.end.hpp"
SDK_VERIFY( union win::rm_resource_limit_flags_t, 0x4 );
