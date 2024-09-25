#pragma once
#include <sdkgen/support_library.hpp>

namespace dmm
{
    // [enum _DMM_CLIENT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class client_type_t : int32_t
    {                                 
        uninitialized =  0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cdd_nopathdata = 0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        usermode =       0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cdd_pathdata =   0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dxgport =        0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_onoff =  0x5,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
