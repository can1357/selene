#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_FLIP_INTERVAL_TYPE]
    //  WDK 10
    //
    enum class ddi_flip_interval_type_t : int32_t
    {                                            
        immediate =               0x0,             // WDK 10
        one =                     0x1,             // WDK 10
        two =                     0x2,             // WDK 10
        three =                   0x3,             // WDK 10
        four =                    0x4,             // WDK 10
        immediate_allow_tearing = 0x5,             // WDK 10
    };                                           
};
