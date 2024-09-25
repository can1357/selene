#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _TOKEN_ELEVATION_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class token_elevation_type_t : int32_t
    {                                          
        _default = 0x1,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        full =     0x2,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        limited =  0x3,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
