#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _WATCHDOG_HANDLER_ACTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class watchdog_handler_action_t : int32_t
    {                                             
        set_timeout_value =    0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_timeout_value =  0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reset_timer =          0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop_timer =           0x3,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_timer =          0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_trigger_action =   0x5,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_trigger_action = 0x6,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_state =          0x7,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleep =                0x8,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake =                 0x9,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mark_hiber_phase =     0xa,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
