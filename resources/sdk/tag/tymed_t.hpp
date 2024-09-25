#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagTYMED]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class tymed_t : int32_t
    {                           
        null =     0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hglobal =  0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file =     0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        istream =  0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        istorage = 0x8,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gdi =      0x10,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mfpict =   0x20,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enhmf =    0x40,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                          
};
