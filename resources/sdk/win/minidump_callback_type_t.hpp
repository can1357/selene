#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MINIDUMP_CALLBACK_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class minidump_callback_type_t : int32_t 
    {                                             
        module_callback =                 0x0,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_callback =                 0x1,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_ex_callback =              0x2,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        include_thread_callback =         0x3,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        include_module_callback =         0x4,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_callback =                 0x5,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel_callback =                 0x6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        write_kernel_minidump_callback =  0x7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel_minidump_status_callback = 0x8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_memory_callback =          0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        include_vm_region_callback =      0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_start_callback =               0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_write_all_callback =           0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_finish_callback =              0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        read_memory_failure_callback =    0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        secondary_flags_callback =        0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_process_snapshot_callback =    0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vm_start_callback =               0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vm_query_callback =               0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vm_pre_read_callback =            0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vm_post_read_callback =           0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
