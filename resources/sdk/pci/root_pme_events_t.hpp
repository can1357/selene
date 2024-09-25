#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_ROOT_PME_EVENTS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class root_pme_events_t : int32_t      
    {                                           
        root_port_attention =            0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send_wait_wake =                 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        complete_wait_wake =             0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel_wait_wake =               0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send_d0 =                        0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retire_d0 =                      0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queue_wake_state_event =         0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exit_thread =                    0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //maximum =                      0x8,     // Windows 10 v1607
        ww_send_cancel_power_available = 0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        drips_watchdog_callback =        0x9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =                        0xa,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
