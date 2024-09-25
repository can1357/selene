#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DUMP_TYPES]
    //  WDK 10
    //
    enum class dump_types_t : int32_t
    {                                
        invalid = -0x1,                // WDK 10
        unknown = 0x0,                 // WDK 10
        full =    0x1,                 // WDK 10
        summary = 0x2,                 // WDK 10
        header =  0x3,                 // WDK 10
        triage =  0x4,                 // WDK 10
    };                               
};
