#pragma once
#include <sdkgen/support_library.hpp>

namespace power
{
    // [enum _POWER_REQUEST_TYPE_INTERNAL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_type_internal_t : int32_t
    {                                           
        display_required_internal =    0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_required_internal =     0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        away_mode_required_internal =  0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        execution_required_internal =  0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        perf_boost_required_internal = 0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active_lock_screen_internal =  0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_invalid =             0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
