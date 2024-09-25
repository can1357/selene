#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _VRF_RULE_CLASS_ID]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class vrf_rule_class_id_t : int32_t               
    {                                                      
        dif_plugin_special_pool =                  0x0,      // Windows 11
        vrf_special_pool_rule_class =              0x0,      // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_irql_rule_class =               0x1,      // Windows 11
        vrf_force_irql_rule_class =                0x1,      // Windows 10 v2004, Windows 10 v20H2
        vrf_allocation_failures_rule_class =       0x2,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dif_plugin_pool_tracking =                 0x3,      // Windows 11
        vrf_tracking_pool_allocations_rule_class = 0x3,      // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_io_rule_class =                 0x4,      // Windows 11
        vrf_io_rule_class =                        0x4,      // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_deadlock =                      0x5,      // Windows 11
        vrf_deadlock_prevention_rule_class =       0x5,      // Windows 10 v2004, Windows 10 v20H2
        vrf_enhanced_io_rule_class =               0x6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dif_plugin_dma_rule_class =                0x7,      // Windows 11
        vrf_dma_rule_class =                       0x7,      // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_security =                      0x8,      // Windows 11
        vrf_security_rule_class =                  0x8,      // Windows 10 v2004, Windows 10 v20H2
        vrf_force_pending_io_request_rule_class =  0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_irp_tracking_rule_class =              0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dif_plugin_miscellaneous =                 0xb,      // Windows 11
        vrf_miscellaneous_rule_class =             0xb,      // Windows 10 v2004, Windows 10 v20H2
        vrf_more_debugging_rule_class =            0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_mdl_invariant_stack_rule_class =       0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_mdl_invariant_driver_rule_class =      0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dif_plugin_power_delay_fuzzing =           0xf,      // Windows 11
        vrf_power_delay_fuzzing_rule_class =       0xf,      // Windows 10 v2004, Windows 10 v20H2
        vrf_port_miniport_rule_class =             0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dif_plugin_ddi_standard =                  0x11,     // Windows 11
        vrf_standard_ddi_rule_class =              0x11,     // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_auto_fail =                     0x12,     // Windows 11
        vrf_auto_fail_rule_class =                 0x12,     // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_ddi_stateful =                  0x13,     // Windows 11
        vrf_additional_ddi_rule_class =            0x13,     // Windows 10 v2004, Windows 10 v20H2
        vrf_rule_class_base =                      0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_ndis_wifi_rule_class =                 0x15,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dif_plugin_driver_logging =                0x16,     // Windows 11
        vrf_driver_logging_rule_class =            0x16,     // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_sync_delay_fuzzing =            0x17,     // Windows 11
        vrf_sync_delay_fuzzing_rule_class =        0x17,     // Windows 10 v2004, Windows 10 v20H2
        vrf_vm_switching_rule_class =              0x18,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_code_integrity_rule_class =            0x19,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_below4gb_allocation_rule_class =       0x1a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_processor_branch_trace_rule_class =    0x1b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_advanced_mm_rule_class =               0x1c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_extending_xdv_time_limit =             0x1d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_system_bios_rule_class =               0x1e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_hardware_rule_class =                  0x1f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dif_plugin_driver_isolation =              0x20,     // Windows 11
        vrf_state_sep_rule_class =                 0x20,     // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_wdf_rule_class =                0x21,     // Windows 11
        vrf_wdf_rule_class =                       0x21,     // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_ddi_moreirql =                  0x22,     // Windows 11
        vrf_more_irql_rule_class =                 0x22,     // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_mode =                          0x23,     // Windows 11
        vrf_xdv_platform_mode =                    0x23,     // Windows 10 v2004, Windows 10 v20H2
        reserved_for_dvrf36 =                      0x24,     // Windows 11
        vrf_standalone_platform_mode =             0x24,     // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_test =                          0x25,     // Windows 11
        vrf_platform_mode_test =                   0x25,     // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_info_disclosure_irp_rule =      0x26,     // Windows 11
        vrf_info_disclosure_irp_rule =             0x26,     // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_lw_sp =                         0x27,     // Windows 11
        vrf_lw_special_pool =                      0x27,     // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_avx_corruption =                0x28,     // Windows 11
        vrf_avx_corruption =                       0x28,     // Windows 10 v2004, Windows 10 v20H2
        dif_plugin_access_mode_mismatch =          0x29,     // Windows 11
        vrf_access_mode_mismatch =                 0x29,     // Windows 10 v2004, Windows 10 v20H2
        reserved_for_dvrf42 =                      0x2a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf43 =                      0x2b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf44 =                      0x2c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf45 =                      0x2d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf46 =                      0x2e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf47 =                      0x2f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf48 =                      0x30,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf49 =                      0x31,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf50 =                      0x32,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf51 =                      0x33,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf52 =                      0x34,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf53 =                      0x35,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf54 =                      0x36,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf55 =                      0x37,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf56 =                      0x38,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf57 =                      0x39,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf58 =                      0x3a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf59 =                      0x3b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf60 =                      0x3c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf61 =                      0x3d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf62 =                      0x3e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_dvrf63 =                      0x3f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_rule_class_size_max =                  0x40,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
