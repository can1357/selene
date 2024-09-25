#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _WRITE_ROTATION]
    //  WDK 10
    //
    enum class write_rotation_t : int32_t
    {                                    
        default_rotation = 0x0,            // WDK 10
        cav_rotation =     0x1,            // WDK 10
    };                                   
};
