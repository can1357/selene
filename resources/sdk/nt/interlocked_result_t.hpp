#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _INTERLOCKED_RESULT]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class interlocked_result_t : int32_t
    {                                        
        zero =     0x0,                        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        negative = 0x1,                        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        positive = 0x2,                        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
