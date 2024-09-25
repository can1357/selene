#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_PIN_MODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pin_mode_t : int32_t
    {                              
        not_supported = 0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled =       0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =      0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =           0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
