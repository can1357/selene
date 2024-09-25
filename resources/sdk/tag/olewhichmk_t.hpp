#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagOLEWHICHMK]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class olewhichmk_t : int32_t
    {                                
        container = 0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        objrel =    0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        objfull =   0x3,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
