#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagOLECONTF]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class olecontf_t : int32_t
    {                              
        embeddings =    0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        links =         0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        others =        0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        onlyuser =      0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        onlyifrunning = 0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
