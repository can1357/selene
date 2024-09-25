#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_RELEASE_HARDWARE_ORDER_ON_FAILURE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class release_hardware_order_on_failure_t : int32_t
    {                                                       
        invalid =           0x0,                              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        early =             0x1,                              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        after_descendants = 0x2,                              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
