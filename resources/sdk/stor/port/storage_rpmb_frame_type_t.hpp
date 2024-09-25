#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORAGE_RPMB_FRAME_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class storage_rpmb_frame_type_t : int32_t
    {                                             
        unknown =  0x0,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        standard = 0x1,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =      0x2,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
