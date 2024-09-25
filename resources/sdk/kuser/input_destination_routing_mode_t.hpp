#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum INPUT_DESTINATION_ROUTING_MODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class input_destination_routing_mode_t : int32_t
    {                                                    
        _default =    0x0,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        observe =     0x1,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ism =         0x2,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        route_to_mt = 0x3,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
