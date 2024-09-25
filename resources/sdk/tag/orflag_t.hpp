#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagORFLAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class orflag_t : int32_t  
    {                              
        connected =         0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stringsregistered = 0x2,     // Windows 10 v1607
    };                             
};
