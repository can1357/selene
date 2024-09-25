#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxWakeInterruptStates]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wake_interrupt_states_t : int32_t           
    {                                                      
        invalid =                                   0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed =                                    0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0 =                                        0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx =                                        0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking =                                    0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invoking_evt_isr_post_wake =                0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        completing_d0 =                             0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invoking_evt_isr_in_d0 =                    0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_not_armed_for_wake =                     0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invoking_evt_isr_in_dx_not_armed_for_wake = 0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                                       0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
