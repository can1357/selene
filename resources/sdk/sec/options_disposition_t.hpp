#pragma once
#include <sdkgen/support_library.hpp>

namespace sec
{
    // [enum _SecurityOptionsDisposition]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class options_disposition_t : int32_t   
    {                                            
        for_activation_via_restriction = 0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        for_launch_via_restriction =     0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        for_activation_via_permission =  0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        for_launch_via_permission =      0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        for_call_via_restriction =       0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        for_call_via_permission =        0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        via_defaultpermission =          0x40,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
