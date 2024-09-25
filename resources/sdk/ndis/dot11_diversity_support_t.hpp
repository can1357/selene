#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _DOT11_DIVERSITY_SUPPORT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dot11_diversity_support_t : int32_t
    {                                             
        unknown =      0x0,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fixedlist =    0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notsupported = 0x2,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic =      0x3,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
