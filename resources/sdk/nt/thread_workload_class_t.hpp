#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _THREAD_WORKLOAD_CLASS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class thread_workload_class_t : int32_t
    {                                           
        thread_workload_class_default =  0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread_workload_class_graphics = 0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_thread_workload_class =      0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
