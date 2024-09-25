#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MATCHMODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class matchmode_t : int32_t
    {                               
        unknown =   0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exclusive = 0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        additive =  0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
