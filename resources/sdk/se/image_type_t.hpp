#pragma once
#include <sdkgen/support_library.hpp>

namespace se
{
    // [enum _SE_IMAGE_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class image_type_t : int32_t 
    {                                 
        elam_driver =          0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver =               0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                0x2,     // Windows 10 v1607
        platform_secure_file = 0x2,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_code_file =    0x3,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                  0x4,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
