#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum _MODERN_SCALE_FACTOR]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class modern_scale_factor_t : int32_t
    {                                         
        scale_invalid =     0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scale_100_percent = 0x64,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scale_140_percent = 0x8c,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        scale_180_percent = 0xb4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
