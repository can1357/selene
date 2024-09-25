#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_ACTIVATION_COMMAND]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activation_command_t : int32_t
    {                                        
        deactivate = 0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activate =   0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel =     0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =      0x2,                      // Windows 10 v1607
        max =        0x3,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
