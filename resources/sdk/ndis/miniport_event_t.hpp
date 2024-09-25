#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_MINIPORT_EVENT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class miniport_event_t : uint16_t    
    {                                         
        unknown =                     0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_system_sleep =             0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_nic_quiet =                0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_ss_idle =                  0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_d3d_timeout =              0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_system_resume =            0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_nic_active =               0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_ao_ac_wake =               0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_ss_resume =                0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_d3d_cancel =               0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_d3d_wake =                 0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_d3d_resume =               0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_complete =                 0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_ss_complete =              0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_complete =                 0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_ss_complete =              0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ss_cancel_idle =              0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ss_idle_complete =            0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ss_idle_req =                 0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ss_idle_confirm =             0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_ao_ac_surprise_wake =      0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_s0_idle =                  0x19,     // Windows 11
        dx_s0_idle =                  0x1a,     // Windows 11
        d0_sx =                       0x1b,     // Windows 11
        dx_sx =                       0x1c,     // Windows 11
        device_added =                0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_start =                0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_query_remove =         0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_cancel_remove =        0x22,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_remove =               0x23,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_surprise_removal =     0x24,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_query_stop =           0x25,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_cancel_stop =          0x26,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_stop =                 0x27,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_initialized =        0x33,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_halted =             0x34,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_paused =             0x35,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_restarted =          0x36,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_pm_initialized =     0x37,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        err_min =                     0x46,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        err_user_requested =          0x46,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        err_miniport_requested =      0x47,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        err_failed_im_init_device =   0x48,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        err_failed_restart =          0x49,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        err_failed_power_d0 =         0x4a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        err_failed_power_dx =         0x4b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        err_max =                     0x4c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        err_uninstalled_by_usermode = 0x4c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
