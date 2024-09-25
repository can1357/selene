#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NDIS_PAUSE_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pause_reason_t : uint32_t         
    {                                            
        initial_pause =                 0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        low_power =                     0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp =                           0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removing_miniport =             0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lower_driver_paused =           0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restart_needed =                0x20,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mandatory_missing_during_boot = 0x40,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdf =                           0x80,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        net_event_require_pause =       0x100,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_change_in_progress =  0x200,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
