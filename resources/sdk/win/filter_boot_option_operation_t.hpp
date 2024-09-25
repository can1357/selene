#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FILTER_BOOT_OPTION_OPERATION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class filter_boot_option_operation_t : int32_t
    {                                                  
        open_system_store = 0x0,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_element =       0x1,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delete_element =    0x2,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =               0x3,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
