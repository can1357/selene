#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum XLAT_SIDE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class xlat_side_t : int32_t
    {                               
        server = 0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client = 0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
