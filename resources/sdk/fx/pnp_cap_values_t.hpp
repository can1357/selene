#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPnpCapValues]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pnp_cap_values_t : int32_t            
    {                                                
        dock_device_false =               0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        eject_supported_false =           0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hardware_disabled_false =         0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lock_supported_false =            0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_display_in_ui_false =          0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        removable_false =                 0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        silent_install_false =            0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removal_ok_false =       0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unique_id_false =                 0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lock_supported_true =             0x1,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lock_supported_use_default =      0x2,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lock_supported_mask =             0x3,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        eject_supported_true =            0x4,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        eject_supported_use_default =     0x8,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        eject_supported_mask =            0xc,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        removable_true =                  0x10,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        removable_use_default =           0x20,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        removable_mask =                  0x30,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dock_device_true =                0x40,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dock_device_use_default =         0x80,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dock_device_mask =                0xc0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unique_id_true =                  0x100,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unique_id_use_default =           0x200,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unique_id_mask =                  0x300,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        silent_install_true =             0x400,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        silent_install_use_default =      0x800,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        silent_install_mask =             0xc00,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removal_ok_true =        0x1000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removal_ok_use_default = 0x2000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removal_ok_mask =        0x3000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hardware_disabled_true =          0x4000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hardware_disabled_use_default =   0x8000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hardware_disabled_mask =          0xc000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_display_in_ui_true =           0x10000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_display_in_ui_use_default =    0x20000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_display_in_ui_mask =           0x30000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
