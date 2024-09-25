#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _FAST_IO_POSSIBLE]
    //  WDK 10
    //
    enum class fast_io_possible_t : int32_t
    {                                      
        not_possible = 0x0,                  // WDK 10
        possible =     0x1,                  // WDK 10
        questionable = 0x2,                  // WDK 10
    };                                     
};
