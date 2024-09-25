#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _URLZONEREG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class urlzonereg_t : int32_t
    {                                
        _default = 0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hklm =     0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hkcu =     0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
