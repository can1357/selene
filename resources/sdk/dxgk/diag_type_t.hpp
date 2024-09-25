#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class diag_type_t : int32_t                   
    {                                                  
        type_none =                            0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_sdc =                             0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_hpd =                             0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_dc_origin =                       0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_user_cds =                        0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_drv_cds =                         0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_code_point =                      0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_qdc =                             0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_monitor_mgr =                     0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_connectedset_not_found =          0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_dispdiag_collected =              0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_bml_packet =                      0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_bml_packet2 =                     0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_bml_packet_ex =                   0xc,      // Windows 10 v1607
        type_commit_vidpn_failed =             0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_driver_recommend_vidpn =          0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_outputdupl =                      0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_monitor_brightness =              0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_ccd_database_access =             0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_miracast_session_start_done =     0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_miracast_session_start =          0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_miracast_session_start_done_ex =  0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_sdc2 =                            0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_qdc2 =                            0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_functionalize_packet =            0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_miracast_session_start_done_ex2 = 0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_monitor_brightness_ex =           0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_adapter_start =                   0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_padding =                         0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //type_max =                           0x1c,     // Windows 10 v1607
        type_persistent_dup =                  0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_message =                         0x1d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_code_point_adapterluid =          0x1e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_functionalize_packet2 =           0x1f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_bml_packet3 =                     0x20,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_commit_vidpn_failed2 =            0x21,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_driver_recommend_vidpn2 =         0x22,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_ccd_database_access2 =            0x23,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_functionalize_packet3 =           0x24,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_commit_vidpn_failed3 =            0x25,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_sdc3 =                            0x26,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_qdc3 =                            0x27,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_monitor_brightness3 =             0x28,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_adapter_start2 =                  0x29,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_black_screen_packet =             0x2a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sdc_desktop_check_fail_packet =        0x2b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_black_screen_packet2 =            0x2c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_max =                             0x2c,     // Windows 10 v2004, Windows 10 v20H2
        type_settiming_sourcemask =            0x2d,     // Windows 11
        type_sdc4 =                            0x2e,     // Windows 11
        type_sdc5 =                            0x2f,     // Windows 11
        type_qdc4 =                            0x30,     // Windows 11
        type_ccd_database_access3 =            0x31,     // Windows 11
        type_bml_packet4 =                     0x32,     // Windows 11
        type_black_screen_metadata =           0x33,     // Windows 11
        //type_max =                           0x33,     // Windows 11
        type_force_uint32 =                    0xff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
