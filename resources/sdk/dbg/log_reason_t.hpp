#pragma once
#include <sdkgen/support_library.hpp>

namespace dbg
{
    // [enum _DBG_LOG_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class log_reason_t : int32_t                   
    {                                                   
        call_miniport_start_io =                0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_completion =                   0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_complete =                      0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        submit_request =                        0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pause_device =                          0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume_device =                         0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pause_adapter =                         0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume_adapter =                        0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restart_unit =                          0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unit_timeout =                          0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reset_workitem_timeout =                0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_bus_reset =                        0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stor_port_complete_request =            0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stor_port_complete_request_srb =        0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_pause_adapter =                0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_resume_adapter =               0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_pause_device =                 0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_resume_device =                0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_adapter_busy =                 0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_adapter_ready =                0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_device_busy =                  0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_device_ready =                 0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_alloc_deferred_action =          0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unit_pnp_start_received =               0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unit_pnp_stop_received =                0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unit_pnp_remove_received =              0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unit_pnp_surprise_removal_received =    0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adpt_pnp_start_received =               0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adpt_pnp_stop_received =                0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adpt_pnp_remove_received =              0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adpt_pnp_surprise_removal_received =    0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adpt_pnp_qdr =                          0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unit_set_power_received =               0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unit_query_power_received =             0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adpt_set_power_received =               0x22,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adpt_query_power_received =             0x23,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_miniport_build_io =                0x24,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_build_io_return_failure =      0x25,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_bus_change_detected =          0x26,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_bus_reset_detected =           0x27,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_smr_write_io =                     0x28,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_smr_write_zone_complete =          0x29,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_smr_reset_write_pointer =          0x2a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_smr_reset_write_pointer_complete = 0x2b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mark_device_failed =                    0x2c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_smr_write_io_received =            0x2d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_smr_write_io_submit =              0x2e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_smr_skip_queue =                   0x2f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_smr_dequeue =                      0x30,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
