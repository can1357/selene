#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum OCT_BANNED_API]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class oct_banned_api_t : int32_t      
    {                                          
        first =                        0x0,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_window_rect =              0x0,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_to_screen =             0x1,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        screen_to_client =             0x2,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        map_window_points =            0x3,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_dc =                       0x4,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_dc_ex =                    0x5,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enum_display_monitors =        0x6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_system_metrics =           0x7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitor_from_window =          0x8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitor_from_point =           0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitor_from_rect =            0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_monitor_info_w =           0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_dpi_for_monitor_internal = 0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        physical_to_logical_point =    0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        logical_to_physical_point =    0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_current_dpi_info =         0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        shell_scaling_window =         0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        shell_scaling_monitor =        0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        shell_scaling_device =         0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        last =                         0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
