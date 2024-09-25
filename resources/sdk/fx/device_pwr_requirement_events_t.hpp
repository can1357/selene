#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxDevicePwrRequirementEvents]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_pwr_requirement_events_t : int32_t
    {                                                   
        invalid =                      0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        registered_with_pox =          0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unregistered_with_pox =        0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pox_requires_power =           0x4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pox_does_not_require_power =   0x8,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_going_to_dx =           0x10,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_returned_to_d0 =        0x20,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_directed_powered_down = 0x40,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_directed_powered_up =   0x80,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //null =                       0xff,              // Windows 10 v1607
        pox_directed_power_down =      0x100,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pox_directed_power_up =        0x200,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        null =                         0xffff,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
