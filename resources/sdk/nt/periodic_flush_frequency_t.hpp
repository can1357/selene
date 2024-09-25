#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PERIODIC_FLUSH_FREQUENCY]
    //  Windows 10 v1607
    //
    enum class periodic_flush_frequency_t : int32_t
    {                                              
        none =   0x0,                                // Windows 10 v1607
        normal = 0x1,                                // Windows 10 v1607
        high =   0x2,                                // Windows 10 v1607
        count =  0x3,                                // Windows 10 v1607
    };                                             
};
