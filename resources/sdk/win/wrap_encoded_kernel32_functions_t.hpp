#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum wrapEncodedKERNEL32Functions]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class wrap_encoded_kernel32_functions_t : int32_t
    {                                                     
        fls_alloc =                            0x0,         // Windows 10 v2004, Windows 10 v20H2
        fls_free =                             0x1,         // Windows 10 v2004, Windows 10 v20H2
        fls_get_value =                        0x2,         // Windows 10 v2004, Windows 10 v20H2
        fls_set_value =                        0x3,         // Windows 10 v2004, Windows 10 v20H2
        initialize_critical_section_ex =       0x4,         // Windows 10 v2004, Windows 10 v20H2
        init_once_execute_once =               0x5,         // Windows 10 v2004, Windows 10 v20H2
        create_event_ex_w =                    0x6,         // Windows 10 v2004, Windows 10 v20H2
        create_semaphore_w =                   0x7,         // Windows 10 v2004, Windows 10 v20H2
        create_semaphore_ex_w =                0x8,         // Windows 10 v2004, Windows 10 v20H2
        create_threadpool_timer =              0x9,         // Windows 10 v2004, Windows 10 v20H2
        set_threadpool_timer =                 0xa,         // Windows 10 v2004, Windows 10 v20H2
        wait_for_threadpool_timer_callbacks =  0xb,         // Windows 10 v2004, Windows 10 v20H2
        close_threadpool_timer =               0xc,         // Windows 10 v2004, Windows 10 v20H2
        create_threadpool_wait =               0xd,         // Windows 10 v2004, Windows 10 v20H2
        set_threadpool_wait =                  0xe,         // Windows 10 v2004, Windows 10 v20H2
        close_threadpool_wait =                0xf,         // Windows 10 v2004, Windows 10 v20H2
        flush_process_write_buffers =          0x10,        // Windows 10 v2004, Windows 10 v20H2
        free_library_when_callback_returns =   0x11,        // Windows 10 v2004, Windows 10 v20H2
        get_current_processor_number =         0x12,        // Windows 10 v2004, Windows 10 v20H2
        create_symbolic_link_w =               0x13,        // Windows 10 v2004, Windows 10 v20H2
        set_default_dll_directories =          0x14,        // Windows 10 v2004, Windows 10 v20H2
        compare_string_ex =                    0x15,        // Windows 10 v2004, Windows 10 v20H2
        enum_system_locales_ex =               0x16,        // Windows 10 v2004, Windows 10 v20H2
        get_locale_info_ex =                   0x17,        // Windows 10 v2004, Windows 10 v20H2
        get_user_default_locale_name =         0x18,        // Windows 10 v2004, Windows 10 v20H2
        is_valid_locale_name =                 0x19,        // Windows 10 v2004, Windows 10 v20H2
        lc_map_string_ex =                     0x1a,        // Windows 10 v2004, Windows 10 v20H2
        get_tick_count64 =                     0x1b,        // Windows 10 v2004, Windows 10 v20H2
        get_file_information_by_handle_ex =    0x1c,        // Windows 10 v2004, Windows 10 v20H2
        set_file_information_by_handle =       0x1d,        // Windows 10 v2004, Windows 10 v20H2
        get_system_time_precise_as_file_time = 0x1e,        // Windows 10 v2004, Windows 10 v20H2
        initialize_condition_variable =        0x1f,        // Windows 10 v2004, Windows 10 v20H2
        wake_condition_variable =              0x20,        // Windows 10 v2004, Windows 10 v20H2
        wake_all_condition_variable =          0x21,        // Windows 10 v2004, Windows 10 v20H2
        sleep_condition_variable_cs =          0x22,        // Windows 10 v2004, Windows 10 v20H2
        initialize_srw_lock =                  0x23,        // Windows 10 v2004, Windows 10 v20H2
        acquire_srw_lock_exclusive =           0x24,        // Windows 10 v2004, Windows 10 v20H2
        try_acquire_srw_lock_exclusive =       0x25,        // Windows 10 v2004, Windows 10 v20H2
        release_srw_lock_exclusive =           0x26,        // Windows 10 v2004, Windows 10 v20H2
        sleep_condition_variable_srw =         0x27,        // Windows 10 v2004, Windows 10 v20H2
        create_threadpool_work =               0x28,        // Windows 10 v2004, Windows 10 v20H2
        submit_threadpool_work =               0x29,        // Windows 10 v2004, Windows 10 v20H2
        close_threadpool_work =                0x2a,        // Windows 10 v2004, Windows 10 v20H2
        max_kernel32_function =                0x2b,        // Windows 10 v2004, Windows 10 v20H2
    };                                                    
};
