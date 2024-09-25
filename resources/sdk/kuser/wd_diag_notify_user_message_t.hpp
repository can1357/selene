#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum _WD_DIAG_NOTIFY_USER_MESSAGE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wd_diag_notify_user_message_t : int32_t
    {                                                 
        user_message_dbg_report =              0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_message_first =                   0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_message_tdr_recovery =            0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_message_forced_tdr_ignored =      0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdc_force_mode_enumeration_used =      0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_message_tdr_application_blocked = 0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_reinstall_driver =               0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_message_dod_tdr_recovery =        0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_message_dwminit_timeout =         0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_message_oobe_complete_no_driver = 0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //user_message_all =                   0x9,     // Windows 10 v1607
        user_parvirtualization_blocked =       0x9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_new_display_hdr_enabled =         0xa,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_new_display_hdr_available =       0xb,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_autohdr_enabled =                 0xc,     // Windows 11
        user_message_all =                     0xc,     // Windows 10 v2004, Windows 10 v20H2
        user_autohdr_available =               0xd,     // Windows 11
        //user_message_all =                   0xe,     // Windows 11
    };                                                
};
