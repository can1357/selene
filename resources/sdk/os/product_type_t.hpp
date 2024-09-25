#pragma once
#include <sdkgen/support_library.hpp>

namespace os
{
    // [enum _NT_PRODUCT_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class product_type_t : int32_t
    {                                  
        win_nt =     0x1,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lan_man_nt = 0x2,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server =     0x3,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
