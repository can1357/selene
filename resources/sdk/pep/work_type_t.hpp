#pragma once
#include <sdkgen/support_library.hpp>

namespace pep
{
    // [enum _PEP_WORK_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class work_type_t : int32_t                   
    {                                                  
        active_complete =                       0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_idle_state =                    0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_power =                          0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_power_control =                 0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_idle =                           0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        complete_idle_state =                   0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        complete_perf_state =                   0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        acpi_notify =                           0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        acpi_evaluate_control_method_complete = 0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                                   0x9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
