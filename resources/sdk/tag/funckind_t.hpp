#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagFUNCKIND]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class funckind_t : int32_t
    {                              
        _virtual =    0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        purevirtual = 0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nonvirtual =  0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _static =     0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatch =    0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
