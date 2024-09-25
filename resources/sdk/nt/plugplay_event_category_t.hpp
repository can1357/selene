#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PLUGPLAY_EVENT_CATEGORY]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class plugplay_event_category_t : int32_t
    {                                             
        hardware_profile_change_event = 0x0,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_device_change_event =    0x1,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_class_change_event =     0x2,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_device_event =           0x3,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_install_event =          0x4,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_arrival_event =          0x5,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_event =                   0x6,        // WDK 10
        veto_event =                    0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        blocked_driver_event =          0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //veto_event =                  0x7,        // WDK 10
        //blocked_driver_event =        0x8,        // WDK 10
        invalid_id_event =              0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_property_change_event =  0x9,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //invalid_id_event =            0x9,        // WDK 10
        device_instance_removal_event = 0xa,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_plug_event_category =     0xa,        // WDK 10
        device_instance_started_event = 0xb,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_plug_event_category =       0xc,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
