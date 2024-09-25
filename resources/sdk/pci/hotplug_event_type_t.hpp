#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_HOTPLUG_EVENT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hotplug_event_type_t : int32_t
    {                                        
        none =                     0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        primed =                   0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unprimed =                 0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_request =           0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_request =          0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_disable_request = 0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attention_request =        0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        link_state_active =        0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        link_state_not_active =    0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_fault =              0x9,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stack_torn_down =          0xa,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stack_tear_down_failed =   0xb,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired =            0xc,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        action_completed =         0xd,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_enable =             0xe,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_disable =            0xf,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
