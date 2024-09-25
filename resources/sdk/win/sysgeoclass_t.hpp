#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SYSGEOCLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sysgeoclass_t : int32_t
    {                                 
        all =    0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        region = 0xe,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nation = 0x10,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
