#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum LoadOrFreeWhy]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class load_or_free_why_t : int32_t    
    {                                          
        loading_inproc_server =         0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        co_load_library_called =        0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        co_free_library_called =        0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_to_create_a_path_entry = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        another_thread_beat_us_here =   0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_valid_entry_point =          0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_longer_in_use =              0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
