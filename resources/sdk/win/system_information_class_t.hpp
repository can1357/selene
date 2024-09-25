#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SYSTEM_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_information_class_t : int32_t                           
    {                                                                         
        system_basic_information =                                    0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_information =                                0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_performance_information =                              0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_time_of_day_information =                              0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_path_information =                                     0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_process_information =                                  0x5,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_call_count_information =                               0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_device_information =                                   0x7,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_performance_information =                    0x8,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_flags_information =                                    0x9,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_call_time_information =                                0xa,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_module_information =                                   0xb,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_locks_information =                                    0xc,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_stack_trace_information =                              0xd,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_paged_pool_information =                               0xe,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_non_paged_pool_information =                           0xf,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_handle_information =                                   0x10,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_object_information =                                   0x11,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_page_file_information =                                0x12,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_vdm_instemul_information =                             0x13,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_vdm_bop_information =                                  0x14,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_file_cache_information =                               0x15,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_pool_tag_information =                                 0x16,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_interrupt_information =                                0x17,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_dpc_behavior_information =                             0x18,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_full_memory_information =                              0x19,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_load_gdi_driver_information =                          0x1a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_unload_gdi_driver_information =                        0x1b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_time_adjustment_information =                          0x1c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_summary_memory_information =                           0x1d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_mirror_memory_information =                            0x1e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_performance_trace_information =                        0x1f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_obsolete0 =                                            0x20,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_exception_information =                                0x21,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_crash_dump_state_information =                         0x22,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_kernel_debugger_information =                          0x23,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_context_switch_information =                           0x24,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_registry_quota_information =                           0x25,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_extend_service_table_information =                     0x26,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_priority_seperation =                                  0x27,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_verifier_add_driver_information =                      0x28,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_verifier_remove_driver_information =                   0x29,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_idle_information =                           0x2a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_legacy_driver_information =                            0x2b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_current_time_zone_information =                        0x2c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_lookaside_information =                                0x2d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_time_slip_notification =                               0x2e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_session_create =                                       0x2f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_session_detach =                                       0x30,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_session_information =                                  0x31,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_range_start_information =                              0x32,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_verifier_information =                                 0x33,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_verifier_thunk_extend =                                0x34,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_session_process_information =                          0x35,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_load_gdi_driver_in_system_space =                      0x36,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_numa_processor_map =                                   0x37,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_prefetcher_information =                               0x38,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_extended_process_information =                         0x39,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_recommended_shared_data_alignment =                    0x3a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_com_plus_package =                                     0x3b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_numa_available_memory =                                0x3c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_power_information =                          0x3d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_emulation_basic_information =                          0x3e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_emulation_processor_information =                      0x3f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_extended_handle_information =                          0x40,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_lost_delayed_write_information =                       0x41,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_big_pool_information =                                 0x42,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_session_pool_tag_information =                         0x43,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_session_mapped_view_information =                      0x44,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_hotpatch_information =                                 0x45,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_object_security_mode =                                 0x46,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_watchdog_timer_handler =                               0x47,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_watchdog_timer_information =                           0x48,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_logical_processor_information =                        0x49,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_wow64_shared_information_obsolete =                    0x4a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_register_firmware_table_information_handler =          0x4b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_firmware_table_information =                           0x4c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_module_information_ex =                                0x4d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_verifier_triage_information =                          0x4e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_superfetch_information =                               0x4f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_memory_list_information =                              0x50,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_file_cache_information_ex =                            0x51,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_thread_priority_client_id_information =                0x52,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_idle_cycle_time_information =                0x53,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_verifier_cancellation_information =                    0x54,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_power_information_ex =                       0x55,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_ref_trace_information =                                0x56,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_special_pool_information =                             0x57,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_process_id_information =                               0x58,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_error_port_information =                               0x59,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_boot_environment_information =                         0x5a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_hypervisor_information =                               0x5b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_verifier_information_ex =                              0x5c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_time_zone_information =                                0x5d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_image_file_execution_options_information =             0x5e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_coverage_information =                                 0x5f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_prefetch_patch_information =                           0x60,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_verifier_faults_information =                          0x61,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_system_partition_information =                         0x62,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_system_disk_information =                              0x63,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_performance_distribution =                   0x64,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_numa_proximity_node_information =                      0x65,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_dynamic_time_zone_information =                        0x66,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_information =                           0x67,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_microcode_update_information =               0x68,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_brand_string =                               0x69,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_virtual_address_information =                          0x6a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_logical_processor_and_group_information =              0x6b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_cycle_time_information =                     0x6c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_store_information =                                    0x6d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_registry_append_string =                               0x6e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_ait_sampling_value =                                   0x6f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_vhd_boot_information =                                 0x70,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_cpu_quota_information =                                0x71,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_native_basic_information =                             0x72,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_error_port_timeouts =                                  0x73,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_low_priority_io_information =                          0x74,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_boot_entropy_information =                             0x75,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_tpm_boot_entropy_information =                         0x75,     // WDK 10
        system_verifier_counters_information =                        0x76,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_paged_pool_information_ex =                            0x77,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_system_ptes_information_ex =                           0x78,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_node_distance_information =                            0x79,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_acpi_audit_information =                               0x7a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_basic_performance_information =                        0x7b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_query_performance_counter_information =                0x7c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_session_big_pool_information =                         0x7d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_boot_graphics_information =                            0x7e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_scrub_physical_memory_information =                    0x7f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_bad_page_information =                                 0x80,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_profile_control_area =                       0x81,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_combine_physical_memory_information =                  0x82,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_entropy_interrupt_timing_information =                 0x83,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_console_information =                                  0x84,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_platform_binary_information =                          0x85,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_policy_information =                                   0x86,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_hypervisor_processor_count_information =               0x87,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_device_data_information =                              0x88,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_device_data_enumeration_information =                  0x89,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_memory_topology_information =                          0x8a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_memory_channel_information =                           0x8b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_boot_logo_information =                                0x8c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_performance_information_ex =                 0x8d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_critical_process_error_log_information =               0x8e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_secure_boot_policy_information =                       0x8f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_page_file_information_ex =                             0x90,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_secure_boot_information =                              0x91,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_entropy_interrupt_timing_raw_information =             0x92,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_portable_workspace_efi_launcher_information =          0x93,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_full_process_information =                             0x94,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_kernel_debugger_information_ex =                       0x95,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_boot_metadata_information =                            0x96,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_soft_reboot_information =                              0x97,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_elam_certificate_information =                         0x98,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_offline_dump_config_information =                      0x99,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_features_information =                       0x9a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_registry_reconciliation_information =                  0x9b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_edid_information =                                     0x9c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_manufacturing_information =                            0x9d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_energy_estimation_config_information =                 0x9e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_hypervisor_detail_information =                        0x9f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_cycle_stats_information =                    0xa0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_vm_generation_count_information =                      0xa1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_trusted_platform_module_information =                  0xa2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_kernel_debugger_flags =                                0xa3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_policy_information =                    0xa4,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_isolated_user_mode_information =                       0xa5,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_hardware_security_test_interface_results_information = 0xa6,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_single_module_information =                            0xa7,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_allowed_cpu_sets_information =                         0xa8,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_dma_protection_information =                           0xa9,     // Windows 10 v1607
        system_vsm_protection_information =                           0xa9,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_interrupt_cpu_sets_information =                       0xaa,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_secure_boot_policy_full_information =                  0xab,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_policy_full_information =               0xac,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_affinitized_interrupt_processor_information =          0xad,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_root_silo_information =                                0xae,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_cpu_set_information =                                  0xaf,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_cpu_set_tag_information =                              0xb0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_win32_wer_start_callout =                              0xb1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_secure_kernel_profile_information =                    0xb2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_platform_manifest_information =         0xb3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_interrupt_steering_information =                       0xb4,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_supported_processor_architectures =                    0xb5,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_memory_usage_information =                             0xb6,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_certificate_information =               0xb7,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_physical_memory_information =                          0xb8,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_control_flow_transition =                              0xb9,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_kernel_debugging_allowed =                             0xba,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_activity_moderation_exe_state =                        0xbb,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_activity_moderation_user_settings =                    0xbc,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_policies_full_information =             0xbd,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_unlock_information =                    0xbe,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_integrity_quota_information =                          0xbf,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_flush_information =                                    0xc0,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_processor_idle_mask_information =                      0xc1,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_secure_dump_encryption_information =                   0xc2,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_write_constraint_information =                         0xc3,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_kernel_va_shadow_information =                         0xc4,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_hypervisor_shared_page_information =                   0xc5,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_firmware_boot_performance_information =                0xc6,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_verification_information =              0xc7,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_firmware_partition_information =                       0xc8,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_speculation_control_information =                      0xc9,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_system_info_class =                                     0xca,     // Windows 10 v1607
        system_dma_guard_policy_information =                         0xca,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_enclave_launch_control_information =                   0xcb,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_workload_allowed_cpu_sets_information =                0xcc,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_unlock_mode_information =               0xcd,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_leap_second_information =                              0xce,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_flags2_information =                                   0xcf,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_security_model_information =                           0xd0,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_synthetic_cache_information =           0xd1,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_feature_configuration_information =                    0xd2,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_feature_configuration_section_information =            0xd3,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_feature_usage_subscription_information =               0xd4,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_secure_speculation_control_information =               0xd5,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_system_info_class =                                     0xd6,     // WDK 10
        system_spaces_boot_information =                              0xd6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_fw_ramdisk_information =                               0xd7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_whea_ipmi_hardware_information =                       0xd8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_dif_set_rule_class_information =                       0xd9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_dif_clear_rule_class_information =                     0xda,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_dif_apply_plugin_verification_on_driver =              0xdb,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_dif_remove_plugin_verification_on_driver =             0xdc,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_shadow_stack_information =                             0xdd,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_build_version_information =                            0xde,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_pool_limit_information =                               0xdf,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_add_dynamic_store =                     0xe0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code_integrity_clear_dynamic_stores =                  0xe1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_system_info_class =                                     0xe2,     // Windows 10 v2004
        system_dif_pool_tracking_information =                        0xe2,     // Windows 11
        system_pool_zeroing_information =                             0xe3,     // Windows 11, Windows 10 v20H2
        max_system_info_class =                                       0xe4,     // Windows 10 v20H2
        system_dpc_watchdog_information =                             0xe4,     // Windows 11
        system_dpc_watchdog_information2 =                            0xe5,     // Windows 11
        system_supported_processor_architectures2 =                   0xe6,     // Windows 11
        system_single_processor_relationship_information =            0xe7,     // Windows 11
        system_xfg_check_failure_information =                        0xe8,     // Windows 11
        system_iommu_state_information =                              0xe9,     // Windows 11
        system_hypervisor_minroot_information =                       0xea,     // Windows 11
        system_hypervisor_boot_pages_information =                    0xeb,     // Windows 11
        system_pointer_auth_information =                             0xec,     // Windows 11
        system_secure_kernel_debugger_information =                   0xed,     // Windows 11
        system_original_image_feature_information =                   0xee,     // Windows 11
        //max_system_info_class =                                     0xef,     // Windows 11
    };                                                                        
};
