#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_SYSTEM_IDLE_EVENT_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_idle_event_type_t : int32_t  
    {                                              
        monitor_off_user_input =            0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitor_on_user_input =             0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_presence =                     0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume_from_sx_system_power_state = 0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =                           0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                               0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
