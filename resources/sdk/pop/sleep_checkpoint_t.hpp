#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_SLEEP_CHECKPOINT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sleep_checkpoint_t : int32_t                               
    {                                                                     
        invalid =                                                 0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_transition_start =                                  0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspend_apps_before =                                     0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspend_apps_after =                                      0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspend_services_before =                                 0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspend_services_after =                                  0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notify_superfetch_before =                                0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notify_superfetch_after =                                 0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notify_callbacks_before =                                 0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notify_callbacks_after =                                  0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleep_transaction_committed =                             0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_drivers_before =                                    0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_drivers_after =                                     0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context =                                0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspend_drivers_before =                                  0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pre_sleep_notification =                                  0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interrupts_disabled_begin =                               0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invoke_handler_before =                                   0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        save_hiber_context_begin =                                0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialize_dump_stack_failed =                            0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hiber_write_failed =                                      0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hiber_file_too_small =                                    0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        save_hiber_context_failed =                               0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        save_hiber_context_end =                                  0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hiber_kernel_handoff =                                    0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invoke_handler_after =                                    0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        read_hiberfile_before =                                   0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialize_dump_stack_for_read_failed =                   0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hiber_read_failed =                                       0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        checksum_failure =                                        0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        decompression_failed =                                    0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        read_hiberfile_after =                                    0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interrupts_disabled_end =                                 0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_drivers_after =                                      0x24,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume_apps_before =                                      0x25,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume_apps_after =                                       0x26,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume_services_before =                                  0x27,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume_services_after =                                   0x28,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_transition_end =                                    0x29,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context_no_file_object =                 0x2a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =                                                 0x2a,     // Windows 10 v1607
        allocating_hiber_context_get_dump_stack_failed =          0x2b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context_load_resume_context_failed =     0x2c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context_bcd_open_failed =                0x2d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context_establish_resume_object_failed = 0x2e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context_set_pending_resume_failed =      0x2f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context_allocate_io_pages_pages_failed = 0x30,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context_adapter_buffers_invalid1 =       0x31,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context_allocate_dump_pages_failed =     0x32,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context_adapter_buffers_invalid2 =       0x33,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context_un_hibernated_mdl_failed =       0x34,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocating_hiber_context_secure_resources_failed =        0x35,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        prepare_sleep_before =                                    0x36,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        prepare_sleep_after =                                     0x37,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bootstat_available =                                      0x38,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                                                     0x39,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                    
};
