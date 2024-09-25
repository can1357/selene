#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum _WD_LOGEVENT_LEVEL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wd_logevent_level_t : int32_t
    {                                       
        critical_error =      0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        log_level_first =     0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        assertion =           0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =               0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        warning =             0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event =               0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace =               0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        low_resource =        0x6,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dmm_event =           0x7,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        present_token_event = 0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power =               0x9,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        debug =               0xa,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        log_level_all =       0xb,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
