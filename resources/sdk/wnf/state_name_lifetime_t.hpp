#pragma once
#include <sdkgen/support_library.hpp>

namespace wnf
{
    // [enum _WNF_STATE_NAME_LIFETIME]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class state_name_lifetime_t : int32_t
    {                                         
        well_known_state_name = 0x0,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        permanent_state_name =  0x1,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        persistent_state_name = 0x2,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        temporary_state_name =  0x3,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
