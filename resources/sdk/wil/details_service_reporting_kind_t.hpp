#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_details_ServiceReportingKind]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class details_service_reporting_kind_t : int32_t
    {                                                    
        unique_usage =                  0x0,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unique_opportunity =            0x1,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_usage =                  0x2,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_opportunity =            0x3,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        potential_unique_usage =        0x4,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        potential_unique_opportunity =  0x5,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        potential_device_usage =        0x6,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        potential_device_opportunity =  0x7,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled_total_duration =        0x8,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled_paused_duration =       0x9,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_total_duration =       0xa,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_paused_duration =      0xb,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_enabled_base =           0x64,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_disabled_base =          0x96,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        store =                         0xfe,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        none =                          0xff,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        variant_device_potential_base = 0x100,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        variant_device_usage_base =     0x140,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        variant_unique_potential_base = 0x180,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        variant_unique_usage_base =     0x1c0,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
