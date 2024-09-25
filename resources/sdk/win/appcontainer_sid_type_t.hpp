#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _APPCONTAINER_SID_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class appcontainer_sid_type_t : int32_t
    {                                           
        not_app_container_sid_type =     0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        child_app_container_sid_type =   0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parent_app_container_sid_type =  0x2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_app_container_sid_type = 0x3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_app_container_sid_type =     0x4,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
