#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SYSTEM_FIRMWARE_TABLE_ACTION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_firmware_table_action_t : int32_t
    {                                                  
        enumerate = 0x0,                                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get =       0x1,                                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
