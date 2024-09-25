#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagSYSKIND]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class syskind_t : int32_t
    {                             
        win16 = 0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        win32 = 0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mac =   0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        win64 = 0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
