#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _BIN_TYPES]
    //  WDK 10
    //
    enum class bin_types_t : int32_t
    {                               
        size =     0x0,               // WDK 10
        location = 0x1,               // WDK 10
    };                              
};
