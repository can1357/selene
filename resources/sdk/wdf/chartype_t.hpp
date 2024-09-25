#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum CHARTYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class chartype_t : int32_t
    {                              
        other =   0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        percent = 0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dot =     0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        star =    0x3,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        zero =    0x4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        digit =   0x5,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flag =    0x6,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        size =    0x7,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type =    0x8,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
