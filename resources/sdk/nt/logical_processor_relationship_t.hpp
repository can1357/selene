#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _LOGICAL_PROCESSOR_RELATIONSHIP]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class logical_processor_relationship_t : int32_t
    {                                                    
        processor_core =    0x0,                           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        numa_node =         0x1,                           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cache =             0x2,                           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        processor_package = 0x3,                           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        group =             0x4,                           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        processor_die =     0x5,                           // Windows 11
        numa_node_ex =      0x6,                           // Windows 11
        processor_module =  0x7,                           // Windows 11
        all =               0xffff,                        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
