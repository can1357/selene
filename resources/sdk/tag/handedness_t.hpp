#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagHANDEDNESS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class handedness_t : int32_t
    {                                
        left =  0x0,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        right = 0x1,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
