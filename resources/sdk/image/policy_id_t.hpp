#pragma once
#include <sdkgen/support_library.hpp>

namespace image
{
    // [enum _IMAGE_POLICY_ID]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class policy_id_t : int32_t 
    {                                
        none =                0x0,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        etw =                 0x1,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        debug =               0x2,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        crash_dump =          0x3,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        crash_dump_key =      0x4,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        crash_dump_key_guid = 0x5,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parent_sd =           0x6,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parent_sd_rev =       0x7,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        svn =                 0x8,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_id =           0x9,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        capability =          0xa,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scenario_id =         0xb,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =             0xc,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
