#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_WORKING_SET_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class working_set_type_t : int32_t
    {                                      
        system_cache =      0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        partition_maximum = 0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //system_ptes =     0x1,             // Windows 10 v1607
        system_views =      0x1,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pagable_maximum =   0x2,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        paged_pool =        0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //maximum =         0x3,             // Windows 10 v1607
        system_ptes =       0x3,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel_stacks =     0x4,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_paged_pool =    0x5,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =           0x6,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
