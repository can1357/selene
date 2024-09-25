#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagTYPEKIND]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class typekind_t : int32_t
    {                              
        _enum =     0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        record =    0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        module =    0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface = 0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatch =  0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        coclass =   0x5,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alias =     0x6,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _union =    0x7,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =       0x8,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
