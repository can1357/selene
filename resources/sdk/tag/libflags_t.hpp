#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagLIBFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class libflags_t : int32_t
    {                              
        frestricted =   0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fcontrol =      0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fhidden =       0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fhasdiskimage = 0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
