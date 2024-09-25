#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _RAID_DEFERRED_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class raid_deferred_type_t : int32_t
    {                                        
        timer_request =            0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =                    0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pause =                    0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume =                   0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pause_device =             0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume_device =            0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        busy =                     0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ready =                    0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_busy =              0x9,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_ready =             0xa,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        additional_timer_request = 0xb,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        async_notification =       0xc,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
