#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum PDC_ACTIVITY_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pdc_activity_type_t : int32_t
    {                                       
        network =            0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system =             0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer =              0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_networks =       0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        any_network =        0x4,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //invalid_activity = 0x4,             // Windows 10 v1607
        //max_activity =     0x4,             // Windows 10 v1607
        invalid_activity =   0x5,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_activity =       0x5,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
