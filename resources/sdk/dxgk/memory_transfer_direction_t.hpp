#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_MEMORY_TRANSFER_DIRECTION]
    //  WDK 10
    //
    enum class memory_transfer_direction_t : int32_t
    {                                               
        local_to_system = 0x0,                        // WDK 10
        system_to_local = 0x1,                        // WDK 10
        local_to_local =  0x2,                        // WDK 10
    };                                              
};
