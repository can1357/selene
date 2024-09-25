#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_GAMMARAMP_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gammaramp_type_t : int32_t
    {                                    
        uninitialized = 0x0,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _default =      0x1,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rgb256x3x16 =   0x2,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dxgi_1 =        0x3,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        matrix_3x4 =    0x4,               // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        matrix_v2 =     0x5,               // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
