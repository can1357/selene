#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _IRQ_GROUP_POLICY]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class irq_group_policy_t : int32_t
    {                                      
        all_group_zero = 0x0,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dont_care =      0x1,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
