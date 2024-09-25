#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum DPI_HOSTING_BEHAVIOR]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dpi_hosting_behavior_t : int32_t
    {                                          
        //invalid = -0x1,                        // WDK 10
        _default =  0x0,                         // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mixed =     0x1,                         // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =   0xff,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
