#pragma once
#include <sdkgen/support_library.hpp>

namespace se
{
    // [enum _SE_IMAGE_SIGNATURE_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class image_signature_type_t : int32_t
    {                                          
        none =               0x0,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        embedded =           0x1,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cache =              0x2,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        catalog_cached =     0x3,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        catalog_not_cached = 0x4,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        catalog_hint =       0x5,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        package_catalog =    0x6,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ppl_mitigated =      0x7,                // Windows 11
    };                                         
};
