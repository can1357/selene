#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _THREAD_INFORMATION_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class thread_information_class_t : int32_t
    {                                              
        memory_priority =         0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        absolute_cpu_priority =   0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_code_policy =     0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //information_class_max = 0x3,               // Windows 10 v1607
        power_throttling =        0x3,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        information_class_max =   0x4,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
