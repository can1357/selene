#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_PERIODIC_TIMER_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class periodic_timer_state_t : int32_t
    {                                          
        unset = 0x0,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        set =   0x1,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
