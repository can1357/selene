#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DISPLAYCONFIG_ROTATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class displayconfig_rotation_t : int32_t
    {                                            
        identity =     0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rotate90 =     0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rotate180 =    0x3,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rotate270 =    0x4,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_uint32 = 0xff,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
