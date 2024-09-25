#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPnpStateValues]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pnp_state_values_t : int32_t        
    {                                              
        assigned_to_guest_false =        0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_false =                 0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dont_display_in_ui_false =       0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_false =                   0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_disableable_false =          0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed_false =                  0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resources_changed_false =        0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_true =                  0x1,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_use_default =           0x2,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_mask =                  0x3,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dont_display_in_ui_true =        0x4,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dont_display_in_ui_use_default = 0x8,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dont_display_in_ui_mask =        0xc,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_true =                    0x10,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_use_default =             0x20,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_mask =                    0x30,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_disableable_true =           0x40,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_disableable_use_default =    0x80,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_disableable_mask =           0xc0,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed_true =                   0x100,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed_use_default =            0x200,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed_mask =                   0x300,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resources_changed_true =         0x400,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resources_changed_use_default =  0x800,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resources_changed_mask =         0xc00,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        assigned_to_guest_true =         0x1000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        assigned_to_guest_use_default =  0x2000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        assigned_to_guest_mask =         0x3000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
