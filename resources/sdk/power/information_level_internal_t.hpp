#pragma once
#include <sdkgen/support_library.hpp>

namespace power
{
    // [enum _POWER_INFORMATION_LEVEL_INTERNAL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class information_level_internal_t : int32_t                  
    {                                                                  
        internal_acpi_interface_register =                     0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_s0_low_power_idle_info =                      0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_reapply_brightness_settings =                 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_user_absence_prediction =                     0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_user_absence_prediction_capability =          0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_po_processor_latency_hint =                   0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_standby_network_request =                     0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_dirty_transition_information =                0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_set_background_task_state =                   0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        information_internal_ttm_first =                       0x9,      // Windows 10 v1607
        internal_reserved_do_not_use_enum9 =                   0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_open_terminal =                           0x9,      // Windows 10 v1607
        internal_reserved_do_not_use_enum10 =                  0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_create_terminal =                         0xa,      // Windows 10 v1607
        internal_reserved_do_not_use_enum11 =                  0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_evacuate_devices =                        0xb,      // Windows 10 v1607
        internal_reserved_do_not_use_enum12 =                  0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_create_terminal_event_queue =             0xc,      // Windows 10 v1607
        internal_reserved_do_not_use_enum13 =                  0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_get_terminal_event =                      0xd,      // Windows 10 v1607
        internal_reserved_do_not_use_enum14 =                  0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_set_default_device_assignment =           0xe,      // Windows 10 v1607
        internal_reserved_do_not_use_enum15 =                  0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_assign_device =                           0xf,      // Windows 10 v1607
        internal_reserved_do_not_use_enum16 =                  0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_set_display_state =                       0x10,     // Windows 10 v1607
        information_internal_ttm_last =                        0x11,     // Windows 10 v1607
        internal_reserved_do_not_use_enum17 =                  0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ttm_set_display_timeouts =                    0x11,     // Windows 10 v1607
        internal_boot_session_standby_activation_information = 0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_session_power_state =                         0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_session_terminal_input =                      0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_set_watchdog =                                0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_physical_power_button_press_info_at_boot =    0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //information_internal_maximum =                       0x17,     // Windows 10 v1607
        internal_external_monitor_connected =                  0x17,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_high_precision_brightness_settings =          0x18,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_winrt_screen_toggle =                         0x19,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ppm_qos_disable =                             0x1a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_transition_checkpoint =                       0x1b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_input_controller_state =                      0x1c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_firmware_reset_reason =                       0x1d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_ppm_scheduler_qos_support =                   0x1e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_boot_stat_get =                               0x1f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_boot_stat_set =                               0x20,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_call_has_not_returned_watchdog =              0x21,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_boot_stat_check_integrity =                   0x22,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_boot_stat_restore_defaults =                  0x23,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_host_es_state_update =                        0x24,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_get_power_action_state =                      0x25,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_boot_stat_unlock =                            0x26,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_wake_on_voice_state =                         0x27,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_deep_sleep_block =                            0x28,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_is_po_fx_device =                             0x29,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_power_transition_extension_at_boot =          0x2a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_processor_branded_frequency =                 0x2b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_time_broker_expiration_reason =               0x2c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_notify_user_shutdown_status =                 0x2d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_power_request_terminal_core_window =          0x2e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_processor_idle_veto =                         0x2f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_platform_idle_veto =                          0x30,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_is_long_power_button_bugcheck_enabled =       0x31,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_auto_chk_caused_reboot =                      0x32,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_set_wake_alarm_override =                     0x33,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_directed_fx_add_test_device =                 0x35,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_directed_fx_remove_test_device =              0x36,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_directed_fx_set_mode =                        0x38,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_register_power_plane =                        0x39,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_set_directed_drips_flags =                    0x3a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_clear_directed_drips_flags =                  0x3b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_retrieve_hiber_file_resume_context =          0x3c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_read_hiber_file_page =                        0x3d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_last_boot_succeeded =                         0x3e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_query_sleep_study_helper_routine_block =      0x3f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_directed_drips_query_capabilities =           0x40,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_clear_constraints =                           0x41,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_soft_park_velocity_enabled =                  0x42,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_query_intel_pep_capabilities =                0x43,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        information_internal_maximum =                         0x44,     // Windows 10 v2004, Windows 10 v20H2
        internal_get_system_idle_loop_enablement =             0x44,     // Windows 11
        internal_get_vm_perf_control_support =                 0x45,     // Windows 11
        internal_get_vm_perf_control_config =                  0x46,     // Windows 11
        internal_sleep_detailed_diag_update =                  0x47,     // Windows 11
        internal_processor_class_frequency_bands_stats =       0x48,     // Windows 11
        internal_host_global_user_presence_state_update =      0x49,     // Windows 11
        internal_cpu_node_idle_interval_stats =                0x4a,     // Windows 11
        internal_class_idle_interval_stats =                   0x4b,     // Windows 11
        internal_cpu_node_concurrency_stats =                  0x4c,     // Windows 11
        internal_class_concurrency_stats =                     0x4d,     // Windows 11
        internal_query_proc_measurement_capabilities =         0x4e,     // Windows 11
        internal_query_proc_measurement_values =               0x4f,     // Windows 11
        internal_prepare_for_system_initiated_reboot =         0x50,     // Windows 11
        internal_get_adaptive_session_state =                  0x51,     // Windows 11
        internal_set_console_locked_state =                    0x52,     // Windows 11
        internal_override_system_initiated_reboot_state =      0x53,     // Windows 11
        internal_fan_impact_stats =                            0x54,     // Windows 11
        internal_fan_rpm_buckets =                             0x55,     // Windows 11
        internal_power_boot_app_diag_info =                    0x56,     // Windows 11
        internal_unregister_shutdown_notification =            0x57,     // Windows 11
        internal_manage_transition_state_record =              0x58,     // Windows 11
        internal_get_acpi_time_and_alarm_capabilities =        0x59,     // Windows 11
        internal_suspend_resume_request =                      0x5a,     // Windows 11
        //information_internal_maximum =                       0x5b,     // Windows 11
    };                                                                 
};
