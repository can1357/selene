#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_SCHEDULING_PRIORITY_BAND]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class scheduling_priority_band_t : int32_t
    {                                              
        idle =     0x0,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal =   0x1,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        focus =    0x2,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        realtime = 0x3,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =    0x4,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
