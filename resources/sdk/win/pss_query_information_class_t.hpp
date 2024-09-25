#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PSS_QUERY_INFORMATION_CLASS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pss_query_information_class_t : int32_t
    {                                                 
        process_information =         0x0,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        va_clone_information =        0x1,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        auxiliary_pages_information = 0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        va_space_information =        0x3,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        handle_information =          0x4,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_information =          0x5,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        handle_trace_information =    0x6,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        performance_counters =        0x7,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
