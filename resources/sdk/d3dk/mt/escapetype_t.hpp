#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_ESCAPETYPE]
    //  WDK 10
    //
    enum class escapetype_t : int32_t                
    {                                                
        driverprivate =                     0x0,       // WDK 10
        vidmm =                             0x1,       // WDK 10
        tdrdbgctrl =                        0x2,       // WDK 10
        vidsch =                            0x3,       // WDK 10
        device =                            0x4,       // WDK 10
        dmm =                               0x5,       // WDK 10
        debug_snapshot =                    0x6,       // WDK 10
        drt_test =                          0x8,       // WDK 10
        diagnostics =                       0x9,       // WDK 10
        outputdupl_snapshot =               0xa,       // WDK 10
        outputdupl_diagnostics =            0xb,       // WDK 10
        bdd_pnp =                           0xc,       // WDK 10
        bdd_fallback =                      0xd,       // WDK 10
        activate_specific_diag =            0xe,       // WDK 10
        modes_pruned_out =                  0xf,       // WDK 10
        whql_info =                         0x10,      // WDK 10
        brightness =                        0x11,      // WDK 10
        edid_cache =                        0x12,      // WDK 10
        generic_adapter_diag_info =         0x13,      // WDK 10
        miracast_display_request =          0x14,      // WDK 10
        history_buffer_status =             0x15,      // WDK 10
        miracast_adapter_diag_info =        0x17,      // WDK 10
        force_bddfallback_headless =        0x18,      // WDK 10
        request_machine_crash =             0x19,      // WDK 10
        hmd_get_edid_base_block =           0x1a,      // WDK 10
        softgpu_enable_disable_hmd =        0x1b,      // WDK 10
        process_verifier_option =           0x1c,      // WDK 10
        adapter_verifier_option =           0x1d,      // WDK 10
        idd_request =                       0x1e,      // WDK 10
        dod_set_dirtyrect_mode =            0x1f,      // WDK 10
        log_codepoint_packet =              0x20,      // WDK 10
        log_usermode_daig_packet =          0x21,      // WDK 10
        get_external_diagnostics =          0x22,      // WDK 10
        get_display_configurations =        0x24,      // WDK 10
        query_iommu_status =                0x25,      // WDK 10
        ccd_database =                      0x26,      // WDK 10
        win32k_hip_device_info =            0x400,     // WDK 10
        win32k_start =                      0x400,     // WDK 10
        win32k_query_cd_rotation_block =    0x401,     // WDK 10
        win32k_dpi_info =                   0x402,     // WDK 10
        win32k_presenter_view_info =        0x403,     // WDK 10
        win32k_system_dpi =                 0x404,     // WDK 10
        win32k_bdd_fallback =               0x405,     // WDK 10
        win32k_dda_test_ctl =               0x406,     // WDK 10
        win32k_user_detected_black_screen = 0x407,     // WDK 10
        win32k_hmd_enum =                   0x408,     // WDK 10
        win32k_hmd_control =                0x409,     // WDK 10
        win32k_lpmdisplay_control =         0x40a,     // WDK 10
    };                                               
};
