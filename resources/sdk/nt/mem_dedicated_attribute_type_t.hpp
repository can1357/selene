#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MEM_DEDICATED_ATTRIBUTE_TYPE]
    //  Windows 11
    //
    enum class mem_dedicated_attribute_type_t : int32_t
    {                                                  
        read_bandwidth =  0x0,                           // Windows 11
        read_latency =    0x1,                           // Windows 11
        write_bandwidth = 0x2,                           // Windows 11
        write_latency =   0x3,                           // Windows 11
        max =             0x4,                           // Windows 11
    };                                                 
};
