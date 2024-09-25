#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCOMSD]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class comsd_t : int32_t    
    {                               
        launchpermissions =  0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        accesspermissions =  0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        launchrestrictions = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        accessrestrictions = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
