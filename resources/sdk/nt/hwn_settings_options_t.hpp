#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _HWN_SETTINGS_OPTIONS]
    //  WDK 10
    //
    enum class hwn_settings_options_t : int32_t
    {                                          
        intensity =            0x0,              // WDK 10
        period =               0x1,              // WDK 10
        duty_cycle =           0x2,              // WDK 10
        cycle_count =          0x3,              // WDK 10
        cycle_granularity =    0x4,              // WDK 10
        current_mte_reserved = 0x5,              // WDK 10
        total_settings =       0x6,              // WDK 10
    };                                         
};
