#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DISPLAYCONFIG_PIXELFORMAT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class displayconfig_pixelformat_t : int32_t
    {                                               
        pixelformat_8bpp =         0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pixelformat_16bpp =        0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pixelformat_24bpp =        0x3,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pixelformat_32bpp =        0x4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pixelformat_nongdi =       0x5,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pixelformat_force_uint32 = 0xff,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
