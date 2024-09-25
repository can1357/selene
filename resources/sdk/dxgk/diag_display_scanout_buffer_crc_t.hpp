#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_DISPLAY_SCANOUT_BUFFER_CRC]
    //  WDK 10
    //
    enum class diag_display_scanout_buffer_crc_t : int32_t
    {                                                     
        uninitialized = 0x0,                                // WDK 10
        black =         0x1,                                // WDK 10
        non_black =     0x2,                                // WDK 10
        error =         0x3,                                // WDK 10
        unknown =       0x4,                                // WDK 10
    };                                                    
};
