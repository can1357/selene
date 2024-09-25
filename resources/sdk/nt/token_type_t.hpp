#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _TOKEN_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class token_type_t : int32_t
    {                                
        primary =       0x1,           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        impersonation = 0x2,           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
