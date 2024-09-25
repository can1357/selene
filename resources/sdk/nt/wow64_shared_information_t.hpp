#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _WOW64_SHARED_INFORMATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wow64_shared_information_t : int32_t                     
    {                                                                   
        shared_ntdll32_ldr_initialize_thunk =                    0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_ntdll32_ki_user_exception_dispatcher =            0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_ntdll32_ki_user_apc_dispatcher =                  0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_ntdll32_ki_user_callback_dispatcher =             0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_ntdll32_rtl_user_thread_start =                   0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_ntdll32p_query_process_debug_information_remote = 0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_ntdll32_base_address =                            0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_ntdll32_ldr_system_dll_init_block =               0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_ntdll32_rtlp_freeze_time_bias =                   0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //wow64_shared_page_entries_count =                      0x8,     // Windows 10 v1607
        wow64_shared_page_entries_count =                        0x9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                  
};
