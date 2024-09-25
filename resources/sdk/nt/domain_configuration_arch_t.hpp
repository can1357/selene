#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DOMAIN_CONFIGURATION_ARCH]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class domain_configuration_arch_t : int32_t
    {                                               
        arm64 =     0x0,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =   0x1,                              // WDK 10, Windows 10 v2004, Windows 10 v20H2
        x64 =       0x1,                              // Windows 11
        //invalid = 0x2,                              // Windows 11
    };                                              
};
