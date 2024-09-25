#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DETECTION_TYPE]
    //  WDK 10
    //
    enum class detection_type_t : int32_t
    {                                    
        none =     0x0,                    // WDK 10
        int13 =    0x1,                    // WDK 10
        ex_int13 = 0x2,                    // WDK 10
    };                                   
};
