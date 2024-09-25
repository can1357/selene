#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _ALTERNATIVE_ARCHITECTURE_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class alternative_architecture_type_t : int32_t
    {                                                   
        standard_design =  0x0,                           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nec98x86 =         0x1,                           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        end_alternatives = 0x2,                           // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
