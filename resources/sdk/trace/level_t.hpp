#pragma once
#include <sdkgen/support_library.hpp>

namespace trace
{
    // [enum TraceLevel]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class level_t : int32_t
    {                           
        errors =       0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        warning =      0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        info =         0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verbose =      0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        chatty =       0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        garrulous =    0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        loquacious =   0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        noisy_errors = 0x7,       // Windows 11
    };                          
};
