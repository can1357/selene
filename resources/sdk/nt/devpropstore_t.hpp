#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DEVPROPSTORE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class devpropstore_t : int32_t
    {                                  
        system = 0x0,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user =   0x1,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
