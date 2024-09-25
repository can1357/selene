#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _TIMER_SET_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class timer_set_information_class_t : int32_t
    {                                                 
        timer_set_coalescable_timer = 0x0,              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_timer_info_class =        0x1,              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
