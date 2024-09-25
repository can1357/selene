#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _EXCEPTION_DISPOSITION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class exception_disposition_t : int32_t
    {                                           
        continue_execution = 0x0,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        continue_search =    0x1,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nested_exception =   0x2,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        collided_unwind =    0x3,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
