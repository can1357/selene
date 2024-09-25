#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagAR_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ar_state_t : int32_t
    {                              
        enabled =       0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =      0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suppressed =    0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remotesession = 0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        multimon =      0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nosensor =      0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_supported = 0x20,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        docked =        0x40,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        laptop =        0x80,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
