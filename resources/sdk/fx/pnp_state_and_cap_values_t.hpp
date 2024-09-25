#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPnpStateAndCapValues]
    //  Windows 10 v1607
    //
    enum class pnp_state_and_cap_values_t : int32_t          
    {                                                        
        cap_dock_device_false =                0x0,            // Windows 10 v1607
        cap_eject_supported_false =            0x0,            // Windows 10 v1607
        cap_hardware_disabled_false =          0x0,            // Windows 10 v1607
        cap_lock_supported_false =             0x0,            // Windows 10 v1607
        cap_no_display_in_ui_false =           0x0,            // Windows 10 v1607
        cap_removable_false =                  0x0,            // Windows 10 v1607
        cap_silent_install_false =             0x0,            // Windows 10 v1607
        cap_surprise_removal_ok_false =        0x0,            // Windows 10 v1607
        cap_unique_id_false =                  0x0,            // Windows 10 v1607
        state_disabled_false =                 0x0,            // Windows 10 v1607
        state_dont_display_in_ui_false =       0x0,            // Windows 10 v1607
        state_failed_false =                   0x0,            // Windows 10 v1607
        state_not_disableable_false =          0x0,            // Windows 10 v1607
        state_removed_false =                  0x0,            // Windows 10 v1607
        state_resources_changed_false =        0x0,            // Windows 10 v1607
        state_disabled_true =                  0x1,            // Windows 10 v1607
        state_disabled_use_default =           0x2,            // Windows 10 v1607
        state_disabled_mask =                  0x3,            // Windows 10 v1607
        state_dont_display_in_ui_true =        0x4,            // Windows 10 v1607
        state_dont_display_in_ui_use_default = 0x8,            // Windows 10 v1607
        state_dont_display_in_ui_mask =        0xc,            // Windows 10 v1607
        state_failed_true =                    0x10,           // Windows 10 v1607
        state_failed_use_default =             0x20,           // Windows 10 v1607
        state_failed_mask =                    0x30,           // Windows 10 v1607
        state_not_disableable_true =           0x40,           // Windows 10 v1607
        state_not_disableable_use_default =    0x80,           // Windows 10 v1607
        state_not_disableable_mask =           0xc0,           // Windows 10 v1607
        state_removed_true =                   0x100,          // Windows 10 v1607
        state_removed_use_default =            0x200,          // Windows 10 v1607
        state_removed_mask =                   0x300,          // Windows 10 v1607
        state_resources_changed_true =         0x400,          // Windows 10 v1607
        state_resources_changed_use_default =  0x800,          // Windows 10 v1607
        state_resources_changed_mask =         0xc00,          // Windows 10 v1607
        state_mask =                           0xfff,          // Windows 10 v1607
        cap_lock_supported_true =              0x1000,         // Windows 10 v1607
        cap_lock_supported_use_default =       0x2000,         // Windows 10 v1607
        cap_lock_supported_mask =              0x3000,         // Windows 10 v1607
        cap_eject_supported_true =             0x4000,         // Windows 10 v1607
        cap_eject_supported_use_default =      0x8000,         // Windows 10 v1607
        cap_eject_supported_mask =             0xc000,         // Windows 10 v1607
        cap_removable_true =                   0x10000,        // Windows 10 v1607
        cap_removable_use_default =            0x20000,        // Windows 10 v1607
        cap_removable_mask =                   0x30000,        // Windows 10 v1607
        cap_dock_device_true =                 0x40000,        // Windows 10 v1607
        cap_dock_device_use_default =          0x80000,        // Windows 10 v1607
        cap_dock_device_mask =                 0xc0000,        // Windows 10 v1607
        cap_unique_id_true =                   0x100000,       // Windows 10 v1607
        cap_unique_id_use_default =            0x200000,       // Windows 10 v1607
        cap_unique_id_mask =                   0x300000,       // Windows 10 v1607
        cap_silent_install_true =              0x400000,       // Windows 10 v1607
        cap_silent_install_use_default =       0x800000,       // Windows 10 v1607
        cap_silent_install_mask =              0xc00000,       // Windows 10 v1607
        cap_surprise_removal_ok_true =         0x1000000,      // Windows 10 v1607
        cap_surprise_removal_ok_use_default =  0x2000000,      // Windows 10 v1607
        cap_surprise_removal_ok_mask =         0x3000000,      // Windows 10 v1607
        cap_hardware_disabled_true =           0x4000000,      // Windows 10 v1607
        cap_hardware_disabled_use_default =    0x8000000,      // Windows 10 v1607
        cap_hardware_disabled_mask =           0xc000000,      // Windows 10 v1607
        cap_no_display_in_ui_true =            0x10000000,     // Windows 10 v1607
        cap_no_display_in_ui_use_default =     0x20000000,     // Windows 10 v1607
        cap_no_display_in_ui_mask =            0x30000000,     // Windows 10 v1607
        cap_mask =                             0x3ffff000,     // Windows 10 v1607
    };                                                       
};
