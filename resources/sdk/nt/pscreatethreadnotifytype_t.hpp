#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PSCREATETHREADNOTIFYTYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pscreatethreadnotifytype_t : int32_t
    {                                              
        non_system = 0x0,                            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        subsystems = 0x1,                            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
