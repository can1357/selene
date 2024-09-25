#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PARTITION_STYLE]
    //  WDK 10
    //
    enum class partition_style_t : int32_t
    {                                     
        mbr = 0x0,                          // WDK 10
        gpt = 0x1,                          // WDK 10
        raw = 0x2,                          // WDK 10
    };                                    
};
