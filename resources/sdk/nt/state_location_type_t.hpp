#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STATE_LOCATION_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class state_location_type_t : int32_t
    {                                         
        registry =    0x0,                      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_system = 0x1,                      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =     0x2,                      // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
