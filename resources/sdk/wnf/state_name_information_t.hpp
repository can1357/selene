#pragma once
#include <sdkgen/support_library.hpp>

namespace wnf
{
    // [enum _WNF_STATE_NAME_INFORMATION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class state_name_information_t : int32_t
    {                                            
        state_name_exist =    0x0,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        subscribers_present = 0x1,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_quiescent =        0x2,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
