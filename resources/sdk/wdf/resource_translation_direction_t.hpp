#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _RESOURCE_TRANSLATION_DIRECTION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class resource_translation_direction_t : int32_t
    {                                                    
        child_to_parent = 0x0,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parent_to_child = 0x1,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
