#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxCxCallbackType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cx_callback_type_t : uint8_t    
    {                                          
        prepare_hardware =             0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_entry =                     0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sm_io_init =                   0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sm_io_restart =                0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //release_hardware =           0x4,      // Windows 10 v1607
        sm_io_restart_ex =             0x4,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        arm_wake_from_s0 =             0x5,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //d0_exit =                    0x5,      // Windows 10 v1607
        arm_wake_from_sx =             0x6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //sm_io_suspend =              0x6,      // Windows 10 v1607
        arm_wake_from_sx_with_reason = 0x7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //sm_io_flush =                0x7,      // Windows 10 v1607
        d0_entry_post_hw_enabled =     0x8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //sm_io_cleanup =              0x8,      // Windows 10 v1607
        release_hardware =             0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //surprise_removal =           0x9,      // Windows 10 v1607
        d0_exit =                      0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                        0xa,      // Windows 10 v1607
        sm_io_suspend =                0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sm_io_suspend_ex =             0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sm_io_flush =                  0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sm_io_cleanup =                0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removal =             0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarm_wake_from_s0 =          0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarm_wake_from_sx =          0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_s0_triggered =       0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_from_sx_triggered =       0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_exit_pre_hw_disabled =      0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                          0x15,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
