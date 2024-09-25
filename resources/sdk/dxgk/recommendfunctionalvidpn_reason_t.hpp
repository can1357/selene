#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class recommendfunctionalvidpn_reason_t : int32_t
    {                                                     
        uninitialized = 0x0,                                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hotkey =        0x1,                                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        usermode =      0x2,                                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firmware =      0x3,                                // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
