#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_ReportingKind]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class reporting_kind_t : int32_t
    {                                    
        none =               0x0,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unique_usage =       0x1,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unique_opportunity = 0x2,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_usage =       0x3,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_opportunity = 0x4,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        total_duration =     0x5,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        paused_duration =    0x6,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
