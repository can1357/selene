#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_READY_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ready_state_t : int32_t
    {                                 
        off =              0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialized =      0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sim_not_inserted = 0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad_sim =          0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failure =          0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_activated =    0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_locked =    0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_esim_profile =  0x7,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =              0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
