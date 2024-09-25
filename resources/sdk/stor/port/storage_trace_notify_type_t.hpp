#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORAGE_TRACE_NOTIFY_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class storage_trace_notify_type_t : int32_t
    {                                               
        init_tracing =             0x3e8,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cleanup_tracing =          0x3e9,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_message =            0x7d0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        init_global_logger =       0x7d1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wmi_registration_control = 0x7d2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wmi_query_trace_info =     0x7d3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        init_unicode_string =      0x7d4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        trace_debug_print =        0x7d5,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alloc_diag_event =         0xbb8,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        free_diag_event =          0xbb9,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        log_diag_event =           0xbba,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        write_error_log_record =   0xfa0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alloc_error_log =          0xfa1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        free_error_log =           0xfa2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
