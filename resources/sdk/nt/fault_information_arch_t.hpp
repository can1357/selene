#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _FAULT_INFORMATION_ARCH]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fault_information_arch_t : int32_t
    {                                            
        invalid = 0x0,                             // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        arm64 =   0x1,                             // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        x64 =     0x2,                             // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
