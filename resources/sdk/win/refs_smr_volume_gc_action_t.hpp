#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _REFS_SMR_VOLUME_GC_ACTION]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class refs_smr_volume_gc_action_t : int32_t
    {                                               
        start =            0x1,                       // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_full_speed = 0x2,                       // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pause =            0x3,                       // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop =             0x4,                       // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
