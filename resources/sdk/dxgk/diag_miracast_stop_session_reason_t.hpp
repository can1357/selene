#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_MIRACAST_STOP_SESSION_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class diag_miracast_stop_session_reason_t : int32_t
    {                                                       
        unknown =                              0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        umd_critical_error =                   0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        umd_missing_package =                  0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        umd_sink_disconnect_request =          0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        umd_insufficient_bandwidth =           0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        umd_sink_failed_standard_mode_change = 0x5,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        umd_network_l2_disconnected =          0x6,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        umd_power_dwon_miracast_device =       0x7,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        umd_watchdog_timeout =                 0x8,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        umd_companion_driver_request =         0x9,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kmd_user_request =                     0x80,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kmd_user_session_switch =              0x81,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kmd_stop_graphics_device =             0x82,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kmd_power_down_graphics_device =       0x83,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kmd_stop_miracast_device =             0x84,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kmd_isr_invalid_data =                 0x85,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kmd_no_active_paths =                  0x86,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kmd_remove_miracast_device =           0x87,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kmd_entering_connected_standby =       0x88,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kmd_connected_standby_backup =         0x89,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kmd_indirect_swapchain_timeout =       0x90,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_uint32 =                         0xff,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
