#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCOINIT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class coinit_t : int32_t  
    {                              
        multithreaded =     0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        apartmentthreaded = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_ole1dde =   0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        speed_over_memory = 0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
