#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class physical_counter_resource_descriptor_type_t : int32_t
    {                                                               
        single =                         0x0,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        range =                          0x1,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        extended_counter_configuration = 0x2,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        overflow =                       0x3,                         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_buffer =                   0x4,                         // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                          0x4,                         // Windows 10 v1607
        idenitification_tag =            0x5,                         // Windows 11
        max =                            0x5,                         // WDK 10, Windows 10 v2004, Windows 10 v20H2
        //max =                          0x6,                         // Windows 11
    };                                                              
};
