#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PROCESS_INFORMATION_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class process_information_class_t : int32_t
    {                                               
        memory_priority =         0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_exhaustion_info =  0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_memory_info =         0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_private_info =         0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //information_class_max = 0x4,                // Windows 10 v1607
        power_throttling =        0x4,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_value1 =         0x5,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        telemetry_coverage_info = 0x6,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        protection_level_info =   0x7,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        leap_second_info =        0x8,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        information_class_max =   0x9,                // Windows 10 v2004, Windows 10 v20H2
        machine_type_info =       0x9,                // Windows 11
        //information_class_max = 0xa,                // Windows 11
    };                                              
};
