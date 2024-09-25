#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KINTERRUPT_MODE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kinterrupt_mode_t : int32_t
    {                                     
        level_sensitive = 0x0,              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        latched =         0x1,              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
