#pragma once
#include <sdkgen/support_library.hpp>

namespace cc
{
    // [enum _CC_NUMA_TYPE]
    //  Windows 11
    //
    enum class numa_type_t : int32_t    
    {                                   
        invalid_numa_node_type = 0x0,     // Windows 11
        partition_numa_node =    0x1,     // Windows 11
        volume_numa_node =       0x2,     // Windows 11
        max_numa_node_type =     0x3,     // Windows 11
    };                                  
};
