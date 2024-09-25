#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_PIN_FORMAT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pin_format_t : int32_t
    {                                
        unknown =       0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        numeric =       0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alpha_numeric = 0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =           0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
