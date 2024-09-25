#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORAGE_POWERUP_REASON_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class storage_powerup_reason_type_t : int32_t
    {                                                 
        unknown =          0x0,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io =               0x1,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_attention = 0x2,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
