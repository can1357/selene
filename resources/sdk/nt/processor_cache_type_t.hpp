#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PROCESSOR_CACHE_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class processor_cache_type_t : int32_t
    {                                          
        unified =     0x0,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        instruction = 0x1,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        data =        0x2,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace =       0x3,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
