#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_FRAMEBUFFER_STATE]
    //  WDK 10
    //
    enum class framebuffer_state_t : int32_t
    {                                       
        unknown =                 0x0,        // WDK 10
        initialized_by_firmware = 0x1,        // WDK 10
        initialized_by_driver =   0x2,        // WDK 10
    };                                      
};
