#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [enum _IO_ACCESS_MODE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class access_mode_t : int32_t
    {                                 
        sequential_access = 0x0,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        random_access =     0x1,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
