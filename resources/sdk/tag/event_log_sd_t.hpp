#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagEventLogSD]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class event_log_sd_t : int32_t      
    {                                        
        machineaccessrestrictions =   0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        machinelaunchrestrictions =   0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        defaultlaunchpermissions =    0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        defaultaccesspermissions =    0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        serverlaunchpermissions =     0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        serveraccesspermissionsreg =  0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        serveraccesspermissionsprog = 0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dontcare =                    0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
