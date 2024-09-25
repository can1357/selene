#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_PAGE_PRIORITY]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class page_priority_t : int32_t
    {                                   
        low_page_priority =    0x0,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal_page_priority = 0x10,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high_page_priority =   0x20,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
