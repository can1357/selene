#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ACTCTX_REQUESTED_RUN_LEVEL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class actctx_requested_run_level_t : int32_t
    {                                                
        unspecified =       0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        as_invoker =        0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        highest_available = 0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        require_admin =     0x3,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        numbers =           0x4,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
