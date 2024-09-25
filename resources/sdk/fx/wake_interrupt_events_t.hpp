#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxWakeInterruptEvents]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wake_interrupt_events_t : int32_t
    {                                           
        invalid =                       0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        isr =                           0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entering_d0 =                   0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        leaving_d0 =                    0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_entry_failed =               0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        leaving_d0_not_armed_for_wake = 0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        null =                          0xff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
