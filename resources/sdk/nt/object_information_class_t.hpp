#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _OBJECT_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class object_information_class_t : int32_t
    {                                              
        object_basic_information =          0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_name_information =           0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_type_information =           0x2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_types_information =          0x3,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_handle_flag_information =    0x4,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_session_information =        0x5,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_session_object_information = 0x6,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_object_info_class =             0x7,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
