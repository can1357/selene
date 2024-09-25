#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagOLEGETMONIKER]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class olegetmoniker_t : int32_t
    {                                   
        onlyifthere = 0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forceassign = 0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unassign =    0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tempforuser = 0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
