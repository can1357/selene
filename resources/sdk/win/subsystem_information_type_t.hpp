#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SUBSYSTEM_INFORMATION_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class subsystem_information_type_t : int32_t
    {                                                
        subsystem_information_type_win32 = 0x0,        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        subsystem_information_type_wsl =   0x1,        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_subsystem_information_type =   0x2,        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
