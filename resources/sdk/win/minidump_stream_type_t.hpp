#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MINIDUMP_STREAM_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class minidump_stream_type_t : int32_t      
    {                                                
        unused_stream =                    0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_stream0 =                 0x1,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_stream1 =                 0x2,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_list_stream =               0x3,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        module_list_stream =               0x4,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_list_stream =               0x5,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        exception_stream =                 0x6,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_info_stream =               0x7,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_ex_list_stream =            0x8,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory64_list_stream =             0x9,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        comment_stream_a =                 0xa,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        comment_stream_w =                 0xb,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        handle_data_stream =               0xc,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        function_table_stream =            0xd,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unloaded_module_list_stream =      0xe,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        misc_info_stream =                 0xf,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_info_list_stream =          0x10,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_info_list_stream =          0x11,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        handle_operation_list_stream =     0x12,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        token_stream =                     0x13,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        java_script_data_stream =          0x14,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_memory_info_stream =        0x15,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_vm_counters_stream =       0x16,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ipt_trace_stream =                 0x17,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_names_stream =              0x18,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_null =                   0x8000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_system_info =            0x8001,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_exception =              0x8002,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_module_list =            0x8003,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_process_list =           0x8004,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_thread_list =            0x8005,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_thread_context_list =    0x8006,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_thread_call_stack_list = 0x8007,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_memory_virtual_list =    0x8008,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_memory_physical_list =   0x8009,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_bucket_parameters =      0x800a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_process_module_map =     0x800b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ce_stream_diagnosis_list =         0x800c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_reserved_stream =             0xffff,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
