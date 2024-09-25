#pragma once
#include <sdkgen/support_library.hpp>

namespace video
{
    // [enum _VIDEO_WIN32K_CALLBACKS_PARAMS_TYPE]
    //  WDK 10
    //
    enum class win32k_callbacks_params_type_t : int32_t
    {                                                  
        power_notify_callout =              0x1,         // WDK 10
        enum_child_pdo_notify_callout =     0x3,         // WDK 10
        find_adapter_callout =              0x4,         // WDK 10
        pnp_notify_callout =                0x7,         // WDK 10
        dxgk_display_switch_callout =       0x8,         // WDK 10
        dxgk_find_adapter_tdr_callout =     0xa,         // WDK 10
        dxgk_hardware_protection_teardown = 0xb,         // WDK 10
        repaint_desktop =                   0xc,         // WDK 10
        update_cursor =                     0xd,         // WDK 10
        disable_multi_plane_overlay =       0xe,         // WDK 10
        desktop_duplication_change =        0xf,         // WDK 10
        black_screen_diagnostics =          0x10,        // WDK 10
    };                                                 
};
