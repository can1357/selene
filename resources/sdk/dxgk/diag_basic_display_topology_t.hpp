#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_BASIC_DISPLAY_TOPOLOGY]
    //  WDK 10
    //
    enum class diag_basic_display_topology_t : int32_t  
    {                                                   
        basic_display_topology_uninitialized =   0x0,     // WDK 10
        display_connected_directly =             0x1,     // WDK 10
        display_connected_indirectly_convertor = 0x2,     // WDK 10
        display_connected_indirectly_hub =       0x3,     // WDK 10
        display_connected_indirectly =           0x4,     // WDK 10
        display_connected_unknown =              0x5,     // WDK 10
    };                                                  
};
