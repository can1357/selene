#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_ACTIVE_VIDPN_INVALIDATION_REASON]
    //  WDK 10
    //
    enum class active_vidpn_invalidation_reason_t : int32_t
    {                                                      
        uninitialized = 0x0,                                 // WDK 10
        hotkey =        0x1,                                 // WDK 10
        usermode =      0x2,                                 // WDK 10
    };                                                     
};
