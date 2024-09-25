#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _HARDWARE_COUNTER_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hardware_counter_type_t : int32_t
    {                                           
        pmc_counter =               0x0,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_hardware_counter_type = 0x1,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
