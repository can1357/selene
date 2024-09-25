#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _WAIT_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wait_type_t : int32_t
    {                               
        all =          0x0,           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        any =          0x1,           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notification = 0x2,           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dequeue =      0x3,           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dpc =          0x4,           // Windows 11
    };                              
};
