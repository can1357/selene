#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum NotifyResourcesFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class notify_resources_flags_t : int32_t
    {                                            
        no_flags =            0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        np =                  0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removed =    0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_disconnect =    0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        explicit_powerup =    0x8,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        explicit_power_down = 0x10,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disconnect_inactive = 0x20,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        armed_for_wake =      0x40,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
