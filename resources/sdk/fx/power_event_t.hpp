#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPowerEvent]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_event_t : int32_t                 
    {                                                  
        event_invalid =                      0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0 =                                 0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx =                                 0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_arrival =                       0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_succeeded =                     0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_failed =                        0x10,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_canceled =                      0x20,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        implicit_d0 =                        0x40,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        implicit_d3 =                        0x80,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_maximum =                      0xff,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parent_to_d0 =                       0x100,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        singular_event_mask =                0x100,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mark_pageable =                      0x200,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mark_nonpageable =                   0x400,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        complete_d0 =                        0x800,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        complete_dx =                        0x1000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_interrupt_complete_transition = 0x2000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        priority_events_mask =               0x3900,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
