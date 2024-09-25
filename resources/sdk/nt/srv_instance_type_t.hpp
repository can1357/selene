#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _SRV_INSTANCE_TYPE]
    //  WDK 10
    //
    enum class srv_instance_type_t : int32_t
    {                                       
        undefined = 0x0,                      // WDK 10
        primary =   0x1,                      // WDK 10
        csv =       0x2,                      // WDK 10
        sbl =       0x3,                      // WDK 10
        sr =        0x4,                      // WDK 10
        vsmb =      0x5,                      // WDK 10
    };                                      
};
