#pragma once
#include <sdkgen/support_library.hpp>

namespace tp
{
    // [enum _TP_LOG_LEVEL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class log_level_t : int32_t
    {                               
        error =       0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        warning =     0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        info =        0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_enter = 0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_leave = 0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
