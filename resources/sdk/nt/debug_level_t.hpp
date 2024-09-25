#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DEBUG_LEVEL]
    //  WDK 10
    //
    enum class debug_level_t : int32_t
    {                                 
        error =   0x0,                  // WDK 10
        warning = 0x1,                  // WDK 10
        trace =   0x2,                  // WDK 10
        info =    0x3,                  // WDK 10
    };                                
};
