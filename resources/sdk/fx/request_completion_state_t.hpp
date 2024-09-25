#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxRequestCompletionState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_completion_state_t : int32_t
    {                                              
        none =        0x0,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queue =       0x1,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_pkg_flag = 0x80,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_pkg =      0x82,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
