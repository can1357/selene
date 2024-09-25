#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum _STATE_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class state_flags_t : int32_t         
    {                                          
        none =                         0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handles_critical_events_only = 0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handles_low_pri_events =       0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pop_if_parent_state_changes =  0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        end_sub_state_machine =        0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        requires_passive =             0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
