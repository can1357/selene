#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SYSTEM_PIXEL_FORMAT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_pixel_format_t : int32_t
    {                                         
        unknown =  0x0,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r8g8b8 =   0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r8g8b8x8 = 0x2,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        b8g8r8 =   0x3,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        b8g8r8x8 = 0x4,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
