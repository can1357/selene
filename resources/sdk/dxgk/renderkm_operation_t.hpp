#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_RENDERKM_OPERATION]
    //  WDK 10
    //
    enum class renderkm_operation_t : int32_t
    {                                        
        bitblt =         0x1,                  // WDK 10
        colorfill =      0x2,                  // WDK 10
        alphablend =     0x3,                  // WDK 10
        stretchblt =     0x4,                  // WDK 10
        escape =         0x5,                  // WDK 10
        transparentblt = 0x6,                  // WDK 10
        cleartypeblend = 0x7,                  // WDK 10
    };                                       
};
