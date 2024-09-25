#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_ROUND_MODE_ENUM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class round_mode_enum_t : int32_t
    {                                     
        nearest =     0x0,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        down =        0x1,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        up =          0x2,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        toward_zero = 0x3,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        _default =    0x4,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_exc =      0x8,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
