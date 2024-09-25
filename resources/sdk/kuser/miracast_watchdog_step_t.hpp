#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum _MIRACAST_WATCHDOG_STEP]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class miracast_watchdog_step_t : int32_t
    {                                            
        create_driver_context =  0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_miracast_session = 0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop_miracast_session =  0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        destroy_driver_context = 0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_value =          0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
