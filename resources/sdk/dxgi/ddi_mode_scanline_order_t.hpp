#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_MODE_SCANLINE_ORDER]
    //  WDK 10
    //
    enum class ddi_mode_scanline_order_t : int32_t
    {                                             
        unspecified =       0x0,                    // WDK 10
        progressive =       0x1,                    // WDK 10
        upper_field_first = 0x2,                    // WDK 10
        lower_field_first = 0x3,                    // WDK 10
    };                                            
};
