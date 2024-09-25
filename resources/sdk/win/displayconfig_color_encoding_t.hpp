#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _DISPLAYCONFIG_COLOR_ENCODING]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class displayconfig_color_encoding_t : int32_t
    {                                                  
        //force_uint32 = -0x1,                           // WDK 10
        rgb =            0x0,                            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ycbcr444 =       0x1,                            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ycbcr422 =       0x2,                            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ycbcr420 =       0x3,                            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        intensity =      0x4,                            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_uint32 =   0xff,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
