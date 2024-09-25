#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_MODE_ROTATION]
    //  WDK 10
    //
    enum class ddi_mode_rotation_t : int32_t
    {                                       
        unspecified = 0x0,                    // WDK 10
        identity =    0x1,                    // WDK 10
        rotate90 =    0x2,                    // WDK 10
        rotate180 =   0x3,                    // WDK 10
        rotate270 =   0x4,                    // WDK 10
    };                                      
};
