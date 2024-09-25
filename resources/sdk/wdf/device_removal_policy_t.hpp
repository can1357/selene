#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _DEVICE_REMOVAL_POLICY]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_removal_policy_t : int32_t
    {                                           
        no_removal =       0x1,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        orderly_removal =  0x2,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removal = 0x3,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
