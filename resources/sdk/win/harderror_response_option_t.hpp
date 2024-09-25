#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HARDERROR_RESPONSE_OPTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class harderror_response_option_t : int32_t
    {                                               
        abort_retry_ignore =  0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ok =                  0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ok_cancel =           0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retry_cancel =        0x3,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        yes_no =              0x4,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        yes_no_cancel =       0x5,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shutdown_system =     0x6,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ok_no_wait =          0x7,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel_try_continue = 0x8,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
