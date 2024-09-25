#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_GENERIC_COMPARE_RESULTS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class generic_compare_results_t : int32_t
    {                                             
        less_than =    0x0,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        greater_than = 0x1,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        equal =        0x2,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
