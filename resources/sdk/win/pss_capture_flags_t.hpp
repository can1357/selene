#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PSS_CAPTURE_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pss_capture_flags_t : int32_t                     
    {                                                            
        capture_none =                             0x0,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_va_clone =                         0x1,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_reserved_00000002 =                0x2,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_handles =                          0x4,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_handle_name_information =          0x8,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_handle_basic_information =         0x10,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_handle_type_specific_information = 0x20,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_handle_trace =                     0x40,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_threads =                          0x80,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_thread_context =                   0x100,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_thread_context_extended =          0x200,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_reserved_00000400 =                0x400,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_va_space =                         0x800,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_va_space_section_information =     0x1000,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_ipt_trace =                        0x2000,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capture_reserved_00004000 =                0x4000,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_breakaway_optional =                0x4000000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_breakaway =                         0x8000000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_force_breakaway =                   0x10000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_use_vm_allocations =                0x20000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_measure_performance =               0x40000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_release_section =                   0x80000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                           
};
