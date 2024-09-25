#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_PROTECTION_TYPE]
    //  WDK 10
    //
    enum class opm_protection_type_t : int32_t 
    {                                          
        other =                 -0x80000000,     // WDK 10
        mask =                  -0x7fffffc1,     // WDK 10
        none =                  0x0,             // WDK 10
        copp_compatible_hdcp =  0x1,             // WDK 10
        acp =                   0x2,             // WDK 10
        cgmsa =                 0x4,             // WDK 10
        hdcp =                  0x8,             // WDK 10
        dpcp =                  0x10,            // WDK 10
        type_enforcement_hdcp = 0x20,            // WDK 10
    };                                         
};
