#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _OS_DEPLOYEMENT_STATE_VALUES]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class os_deployement_state_values_t : int32_t
    {                                                 
        standard = 0x1,                                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        compact =  0x2,                                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
