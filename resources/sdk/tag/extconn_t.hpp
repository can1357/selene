#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagEXTCONN]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class extconn_t : int32_t
    {                             
        strong =   0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        weak =     0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        callable = 0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
