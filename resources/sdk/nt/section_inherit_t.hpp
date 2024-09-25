#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _SECTION_INHERIT]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class section_inherit_t : int32_t
    {                                     
        share = 0x1,                        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmap = 0x2,                        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
