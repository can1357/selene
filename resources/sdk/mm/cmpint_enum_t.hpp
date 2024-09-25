#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_CMPINT_ENUM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cmpint_enum_t : int32_t
    {                                 
        eq =     0x0,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lt =     0x1,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        le =     0x2,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unused = 0x3,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ne =     0x4,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        nlt =    0x5,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        nle =    0x6,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
