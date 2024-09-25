#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _TRANSFER_COUNT_UNITS]
    //  WDK 10
    //
    enum class transfer_count_units_t : int32_t
    {                                          
        bytes =         0x0,                     // WDK 10
        kibibytes =     0x1,                     // WDK 10
        mebibytes =     0x2,                     // WDK 10
        gibibytes =     0x3,                     // WDK 10
        tebibytes =     0x4,                     // WDK 10
        pebibytes =     0x5,                     // WDK 10
        exbibytes =     0x6,                     // WDK 10
        number_blocks = 0xf1,                    // WDK 10
    };                                         
};
