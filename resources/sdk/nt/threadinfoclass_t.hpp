#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _THREADINFOCLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class threadinfoclass_t : int32_t                  
    {                                                       
        thread_basic_information =                  0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_times =                              0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_priority =                           0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_base_priority =                      0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_affinity_mask =                      0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_impersonation_token =                0x5,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_descriptor_table_entry =             0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_enable_alignment_fault_fixup =       0x7,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_event_pair =                         0x8,      // WDK 10
        thread_event_pair_reusable =                0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_query_set_win32_start_address =      0x9,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_zero_tls_cell =                      0xa,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_performance_count =                  0xb,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_am_i_last_thread =                   0xc,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_ideal_processor =                    0xd,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_priority_boost =                     0xe,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_set_tls_array_address =              0xf,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_is_io_pending =                      0x10,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_hide_from_debugger =                 0x11,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_break_on_termination =               0x12,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_switch_legacy_state =                0x13,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_is_terminated =                      0x14,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_last_system_call =                   0x15,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_io_priority =                        0x16,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_cycle_time =                         0x17,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_page_priority =                      0x18,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_actual_base_priority =               0x19,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_teb_information =                    0x1a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_c_switch_mon =                       0x1b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_c_switch_pmu =                       0x1c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_wow64_context =                      0x1d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_group_information =                  0x1e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_ums_information =                    0x1f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_counter_profiling =                  0x20,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_ideal_processor_ex =                 0x21,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_cpu_accounting_information =         0x22,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_suspend_count =                      0x23,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_heterogeneous_cpu_policy =           0x24,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_container_id =                       0x25,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_name_information =                   0x26,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_selected_cpu_sets =                  0x27,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_system_thread_information =          0x28,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_actual_group_affinity =              0x29,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_dynamic_code_policy_info =           0x2a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_explicit_case_sensitivity =          0x2b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_work_on_behalf_ticket =              0x2c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_thread_info_class =                   0x2d,     // Windows 10 v1607
        thread_subsystem_information =              0x2d,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_dbgk_wer_report_active =             0x2e,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_attach_container =                   0x2f,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_manage_writes_to_executable_memory = 0x30,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_power_throttling_state =             0x31,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_workload_class =                     0x32,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_thread_info_class =                     0x33,     // WDK 10, Windows 10 v2004, Windows 10 v20H2
        thread_create_state_change =                0x33,     // Windows 11
        thread_apply_state_change =                 0x34,     // Windows 11
        //max_thread_info_class =                   0x35,     // Windows 11
    };                                                      
};
