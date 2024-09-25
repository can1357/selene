#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_MODE_SCALING]
    //  WDK 10
    //
    enum class mode_scaling_t : int32_t
    {                                  
        unspecified = 0x0,               // WDK 10
        centered =    0x1,               // WDK 10
        stretched =   0x2,               // WDK 10
    };                                 
};
