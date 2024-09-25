#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_SYSTEM_SIZE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_size_t : int32_t
    {                                 
        small_system =  0x0,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_system = 0x1,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        large_system =  0x2,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
