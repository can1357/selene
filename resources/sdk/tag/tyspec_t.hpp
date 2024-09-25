#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagTYSPEC]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class tyspec_t : int32_t
    {                            
        clsid =       0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fileext =     0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mimetype =    0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filename =    0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        progid =      0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        packagename = 0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        objectid =    0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                           
};
