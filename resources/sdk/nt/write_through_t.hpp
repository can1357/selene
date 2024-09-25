#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _WRITE_THROUGH]
    //  WDK 10
    //
    enum class write_through_t : int32_t
    {                                   
        unknown =       0x0,              // WDK 10
        not_supported = 0x1,              // WDK 10
        supported =     0x2,              // WDK 10
    };                                  
};
