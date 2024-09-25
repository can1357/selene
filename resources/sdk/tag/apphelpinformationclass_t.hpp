#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagAPPHELPINFORMATIONCLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class apphelpinformationclass_t : int32_t
    {                                             
        flags =            0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exe_name =         0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_name =         0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vendor_name =      0x3,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        html_help_id =     0x4,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        problem_severity = 0x5,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        link_url =         0x6,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        link_text =        0x7,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        title =            0x8,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        details =          0x9,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        contact =          0xa,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        help_center_url =  0xb,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exe_tag_id =       0xc,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        database_guid =    0xd,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
