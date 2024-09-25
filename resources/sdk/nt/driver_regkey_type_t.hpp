#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DRIVER_REGKEY_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class driver_regkey_type_t : int32_t
    {                                        
        parameters =              0x0,         // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        persistent_state =        0x1,         // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_persistent_state = 0x2,         // Windows 11
    };                                       
};
