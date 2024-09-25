#pragma once
#include <sdkgen/support_library.hpp>

namespace heap
{
    // [enum _HEAP_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class information_class_t : int32_t             
    {                                                    
        compatibility_information =        0x0,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_termination_on_corruption = 0x1,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        extended_information =             0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        optimize_resources =               0x3,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tagging_information =              0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dump_stack_database =              0x5,            // Windows 10 v1607
        stack_database =                   0x5,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_limit =                     0x6,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tag =                              0x7,            // Windows 11
        detailed_failure_information =     0x80000001,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_debugging_information =        0x80000002,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
