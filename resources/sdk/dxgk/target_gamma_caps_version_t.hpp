#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_TARGET_GAMMA_CAPS_VERSION]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class target_gamma_caps_version_t : int32_t
    {                                               
        defalut =       0x0,                          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_supported = 0x0,                          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        1 =             0x1,                          // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
