#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MINIDUMP_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class minidump_type_t : int32_t                 
    {                                                    
        normal =                            0x0,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_data_segs =                    0x1,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_full_memory =                  0x2,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_handle_data =                  0x4,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_memory =                     0x8,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        scan_memory =                       0x10,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_unloaded_modules =             0x20,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_indirectly_referenced_memory = 0x40,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_module_paths =               0x80,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_process_thread_data =          0x100,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_private_read_write_memory =    0x200,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        without_optional_data =             0x400,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_full_memory_info =             0x800,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_thread_info =                  0x1000,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_code_segs =                    0x2000,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        without_auxiliary_state =           0x4000,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_full_auxiliary_state =         0x8000,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_private_write_copy_memory =    0x10000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ignore_inaccessible_memory =        0x20000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_token_information =            0x40000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_module_headers =               0x80000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_triage =                     0x100000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_avx_x_state_context =          0x200000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        with_ipt_trace =                    0x400000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        scan_inaccessible_partial_pages =   0x800000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        valid_type_flags =                  0xffffff,      // Windows 10 v2004, Windows 10 v20H2
        filter_write_combined_memory =      0x1000000,     // Windows 11
        //valid_type_flags =                0x1ffffff,     // Windows 11
    };                                                   
};
