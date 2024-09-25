#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp
{
    // [enum _PNP_WATCHDOG_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class watchdog_type_t : int32_t          
    {                                             
        watchdog_none =                    0x0,     // Windows 11
        event_worker_watchdog =            0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_completion_queue_watchdog = 0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        delayed_remove_worker_watchdog =   0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        add_device_watchdog =              0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_entry_watchdog =            0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
