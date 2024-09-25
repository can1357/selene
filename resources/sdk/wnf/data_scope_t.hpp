#pragma once
#include <sdkgen/support_library.hpp>

namespace wnf
{
    // [enum _WNF_DATA_SCOPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class data_scope_t : int32_t
    {                                
        system =           0x0,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        session =          0x1,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user =             0x2,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process =          0x3,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        machine =          0x4,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        physical_machine = 0x5,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
