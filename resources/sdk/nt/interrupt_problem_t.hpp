#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _INTERRUPT_PROBLEM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class interrupt_problem_t : int32_t            
    {                                                   
        none =                                  0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        madt_parsing_failure =                  0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_controllers_found =                  0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_discovery =                      0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialize_local_unit_failed =          0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialize_io_unit_failed =             0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_logical_id_failed =                 0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_line_state_failed =                 0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generate_message_failed =               0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        convert_id_failed =                     0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cmci_setup_failed =                     0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_max_processors_called_too_early = 0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        processor_reset =                       0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_processor_failed =                0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        processor_not_alive =                   0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lower_irql_violation =                  0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_irql =                          0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_such_controller =                    0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_such_lines =                         0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad_connection_data =                   0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad_routing_data =                      0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_processor =                     0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_to_attain_target =               0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unsupported_wiring_configuration =      0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spare_already_started =                 0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cluster_not_fully_replaced =            0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        new_cluster_already_active =            0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        new_cluster_too_large =                 0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cannot_hardware_quiesce =               0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ipi_destination_update_failed =         0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_memory =                             0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_irt_entries =                        0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        connection_data_bait_and_switch =       0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_logical_flat_id =               0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deinitialize_local_unit_failed =        0x22,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deinitialize_io_unit_failed =           0x23,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mismatched_thermal_lvt_isr =            0x24,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hv_retarget_failed =                    0x25,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deferred_error_setup_failed =           0x26,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad_interrupt_partition =               0x27,     // Windows 11
    };                                                  
};
