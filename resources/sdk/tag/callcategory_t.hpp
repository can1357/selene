#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCALLCATEGORY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class callcategory_t : int32_t
    {                                  
        nocall =            0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronous =       0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        async =             0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inputsync =         0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internalsync =      0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internalinputsync = 0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scmcall =           0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
