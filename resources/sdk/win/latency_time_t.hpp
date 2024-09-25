#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum LATENCY_TIME]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class latency_time_t : int32_t
    {                                  
        dont_care =      0x0,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lowest_latency = 0x1,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
