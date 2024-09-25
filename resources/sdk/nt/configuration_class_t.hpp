#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _CONFIGURATION_CLASS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class configuration_class_t : int32_t
    {                                         
        system_class =     0x0,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        processor_class =  0x1,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cache_class =      0x2,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        adapter_class =    0x3,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        controller_class = 0x4,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        peripheral_class = 0x5,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_class =     0x6,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_class =    0x7,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
