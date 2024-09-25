#pragma once
#include <sdkgen/support_library.hpp>

namespace power
{
    // [enum _POWER_INFORMATION_LEVEL_INTERNAL_TTMTCAPI]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class information_level_internal_ttmtcapi_t : int32_t 
    {                                                          
        information_internal_ttm_first =             0x1000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_open_terminal =                 0x1000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_create_terminal =               0x1001,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_evacuate_devices =              0x1002,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_create_terminal_event_queue =   0x1003,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_get_terminal_event =            0x1004,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_set_default_device_assignment = 0x1005,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_assign_device =                 0x1006,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_set_display_state =             0x1007,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_set_display_timeouts =          0x1008,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_set_display_power_request =     0x1009,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        information_internal_ttm_last =              0x100a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_set_input_wake_capability =     0x100a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
