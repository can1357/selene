#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_HOTPLUG_SLOT_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hotplug_slot_state_t : int32_t
    {                                        
        not_ready =                0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =                 0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_while_disabled =   0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        powered =                  0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bus_speed_set =            0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        link_active_timer_queued = 0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        settle_timer_queued =      0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fully_functional =         0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_while_enabled =    0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_off_timer_queued =   0x9,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        eject_requested =          0xa,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
