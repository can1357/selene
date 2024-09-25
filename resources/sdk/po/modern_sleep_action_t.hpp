#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [enum _PO_MODERN_SLEEP_ACTION]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class modern_sleep_action_t : int32_t         
    {                                                  
        global_activators_veto =                0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_blocking_phases =                   0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_idle =                            0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        minimal_blocking_notification_clients = 0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                                   0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
