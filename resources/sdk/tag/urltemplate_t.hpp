#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagURLTEMPLATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class urltemplate_t : int32_t
    {                                 
        custom =         0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        low =            0x10000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        predefined_min = 0x10000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medlow =         0x10500,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium =         0x11000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medhigh =        0x11500,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high =           0x12000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        predefined_max = 0x20000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
