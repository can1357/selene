#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _APTTYPEQUALIFIER]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class apttypequalifier_t : int32_t
    {                                      
        none =               0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        implicit_mta =       0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        na_on_mta =          0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        na_on_sta =          0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        na_on_implicit_mta = 0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        na_on_mainsta =      0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        application_sta =    0x6,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_1 =         0x7,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
