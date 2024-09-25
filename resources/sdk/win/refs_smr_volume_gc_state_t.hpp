#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _REFS_SMR_VOLUME_GC_STATE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class refs_smr_volume_gc_state_t : int32_t
    {                                              
        inactive =          0x0,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paused =            0x1,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active =            0x2,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active_full_speed = 0x3,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
