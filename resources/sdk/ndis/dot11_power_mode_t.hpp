#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _DOT11_POWER_MODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dot11_power_mode_t : int32_t
    {                                      
        unknown =   0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active =    0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        powersave = 0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
