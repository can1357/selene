#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _JOBOBJECTINFOCLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class jobobjectinfoclass_t : int32_t                      
    {                                                              
        job_object_basic_accounting_information =          0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_basic_limit_information =               0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_basic_process_id_list =                 0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_basic_ui_restrictions =                 0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_security_limit_information =            0x5,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_end_of_job_time_information =           0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_associate_completion_port_information = 0x7,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_basic_and_io_accounting_information =   0x8,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_extended_limit_information =            0x9,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_job_set_information =                   0xa,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_group_information =                     0xb,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_notification_limit_information =        0xc,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_limit_violation_information =           0xd,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_group_information_ex =                  0xe,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_cpu_rate_control_information =          0xf,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_completion_filter =                     0x10,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_completion_counter =                    0x11,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_freeze_information =                    0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved1_information =                 0x12,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_extended_accounting_information =       0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved2_information =                 0x13,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved3_information =                 0x14,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_wake_information =                      0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_background_information =                0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved4_information =                 0x15,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved5_information =                 0x16,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_scheduling_rank_bias_information =      0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved6_information =                 0x17,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_timer_virtualization_information =      0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_cycle_time_notification =               0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved7_information =                 0x18,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_clear_event =                           0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved8_information =                 0x19,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_interference_information =              0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved9_information =                 0x1a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_clear_peak_job_memory_used =            0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved10_information =                0x1b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_memory_usage_information =              0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved11_information =                0x1c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved12_information =                0x1d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_shared_commit =                         0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_container_id =                          0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved13_information =                0x1e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_io_rate_control_information =           0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved14_information =                0x1f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_net_rate_control_information =          0x20,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_notification_limit_information2 =       0x21,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_limit_violation_information2 =          0x22,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_create_silo =                           0x23,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_silo_basic_information =                0x24,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved15_information =                0x25,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_silo_root_directory =                   0x25,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved16_information =                0x26,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_server_silo_basic_information =         0x26,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved17_information =                0x27,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_server_silo_user_shared_data =          0x27,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved18_information =                0x28,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_server_silo_initialize =                0x28,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved19_information =                0x29,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_server_silo_running_state =             0x29,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_io_attribution =                        0x2a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved20_information =                0x2a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_memory_partition_information =          0x2b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved21_information =                0x2b,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_job_object_info_class =                      0x2b,     // Windows 10 v1607
        job_object_container_telemetry_id =                0x2c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved22_information =                0x2c,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved23_information =                0x2d,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_silo_system_root =                      0x2d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_energy_tracking_state =                 0x2e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved24_information =                0x2e,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_reserved25_information =                0x2f,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_thread_impersonation_information =      0x2f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        job_object_io_priority_limit =                     0x30,     // Windows 11
        job_object_reserved26_information =                0x30,     // Windows 11
        max_job_object_info_class =                        0x30,     // WDK 10, Windows 10 v2004, Windows 10 v20H2
        job_object_page_priority_limit =                   0x31,     // Windows 11
        job_object_reserved27_information =                0x31,     // Windows 11
        //max_job_object_info_class =                      0x32,     // Windows 11
    };                                                             
};
