#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxRequestTargetFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_target_flags_t : int32_t
    {                                          
        completed =            0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pended =               0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_set =            0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancelled_from_timer = 0x8,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ignore_state =         0x10,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
