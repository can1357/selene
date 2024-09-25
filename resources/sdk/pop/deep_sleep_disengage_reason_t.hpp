#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_DEEP_SLEEP_DISENGAGE_REASON]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class deep_sleep_disengage_reason_t : int32_t
    {                                                 
        inactive =                  0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_ao_ac =                 0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pending_irps =              0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_settings =            0x3,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        doze_s4_worker_queued =     0x4,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_power_transition =   0x5,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_blocking_drips =     0x6,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        acpi =                      0x7,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        directed_drips_transition = 0x8,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pep_pre_veto =              0x9,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                       0xa,                // Windows 10 v2004, Windows 10 v20H2
        thermal =                   0xa,                // Windows 11
        //max =                     0xb,                // Windows 11
    };                                                
};
