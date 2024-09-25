#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class state_t : int32_t
    {                           
        normal =  0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        percent = 0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flag =    0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        width =   0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dot =     0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        precis =  0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        size =    0x6,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type =    0x7,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                          
};
