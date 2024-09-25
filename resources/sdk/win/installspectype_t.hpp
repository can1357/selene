#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _INSTALLSPECTYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class installspectype_t : int32_t
    {                                     
        appname =  0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fileext =  0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        progid =   0x3,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        comclass = 0x4,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
