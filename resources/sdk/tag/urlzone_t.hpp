#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagURLZONE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class urlzone_t : int32_t 
    {                              
        local_machine =  0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        predefined_min = 0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        intranet =       0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trusted =        0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internet =       0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        untrusted =      0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =        0xff,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        predefined_max = 0x3e7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_min =       0x3e8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_max =       0x2710,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
