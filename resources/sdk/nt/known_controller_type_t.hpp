#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KNOWN_CONTROLLER_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class known_controller_type_t : int32_t
    {                                           
        invalid = 0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pic =     0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        apic =    0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gic =     0x3,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gic_v3 =  0x4,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bcm =   0x5,                            // Windows 10 v1607
        gic_v4 =  0x5,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bcm =     0x6,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown = 0x1000,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
