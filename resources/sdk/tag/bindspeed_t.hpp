#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagBINDSPEED]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bindspeed_t : int32_t
    {                               
        indefinite = 0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        moderate =   0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        immediate =  0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
