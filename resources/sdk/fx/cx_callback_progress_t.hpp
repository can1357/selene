#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxCxCallbackProgress]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cx_callback_progress_t : uint8_t
    {                                          
        failed_in_pre_calls =   0x0,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialized =           0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_called =         0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_in_client_call = 0x1,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_succeeded =      0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_in_post_calls =  0x2,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                   0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
