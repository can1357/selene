#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum PDC_RESOURCE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pdc_resource_t : int32_t 
    {                                   
        min =                    0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_foreground =      0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        universal_applications = 0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        win32 =                  0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        network =                0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                    0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_background =      0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
