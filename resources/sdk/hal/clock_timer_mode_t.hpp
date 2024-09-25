#pragma once
#include <sdkgen/support_library.hpp>

namespace hal
{
    // [enum _HAL_CLOCK_TIMER_MODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class clock_timer_mode_t : int32_t
    {                                      
        periodic = 0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        one_shot = 0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =      0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
