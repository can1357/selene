#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _WATCHDOG_INFORMATION_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class watchdog_information_class_t : int32_t
    {                                                
        timeout_value =        0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reset_timer =          0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop_timer =           0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_timer =          0x3,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trigger_action =       0x4,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        state =                0x5,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trigger_reset =        0x6,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nop =                  0x7,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generated_last_reset = 0x8,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =              0x9,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
