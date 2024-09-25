#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_INTERRUPT_POLARITY]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class interrupt_polarity_t : int32_t
    {                                        
        polarity_unknown = 0x0,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active_high =      0x1,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active_low =       0x2,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
