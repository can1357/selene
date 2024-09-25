#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [enum _IO_CONTAINER_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class container_information_class_t : int32_t
    {                                                 
        session_state_information =       0x0,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_container_information_class = 0x1,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
