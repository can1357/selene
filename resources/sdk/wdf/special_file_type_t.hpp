#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_SPECIAL_FILE_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class special_file_type_t : int32_t
    {                                       
        undefined =      0x0,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paging =         0x1,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hibernation =    0x2,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dump =           0x3,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        boot =           0x4,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =          0x5,                 // WDK 10, Windows 10 v1607
        post_display =   0x5,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        guest_assigned = 0x6,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0x7,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
