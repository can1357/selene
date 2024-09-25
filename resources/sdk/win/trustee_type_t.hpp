#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _TRUSTEE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class trustee_type_t : int32_t
    {                                  
        unknown =          0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user =             0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        group =            0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        domain =           0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alias =            0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        well_known_group = 0x5,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deleted =          0x6,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =          0x7,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        computer =         0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
