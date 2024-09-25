#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagMSIINSTALLCONTEXT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class msiinstallcontext_t : int32_t
    {                                       
        firstvisible =   0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        none =           0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        usermanaged =    0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        userunmanaged =  0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        machine =        0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all =            0x7,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allusermanaged = 0x8,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
