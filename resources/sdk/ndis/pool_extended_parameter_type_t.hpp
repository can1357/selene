#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum POOL_EXTENDED_PARAMETER_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pool_extended_parameter_type_t : int32_t
    {                                                  
        invalid_type = 0x0,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        priority =     0x1,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =          0x2,                              // WDK 10, Windows 10 v2004, Windows 10 v20H2
        secure_pool =  0x2,                              // Windows 11
        numa_node =    0x3,                              // Windows 11
        //max =        0x4,                              // Windows 11
    };                                                 
};
