#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DISPLAYCONFIG_MODE_INFO_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class displayconfig_mode_info_type_t : int32_t
    {                                                  
        source =        0x1,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        target =        0x2,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        desktop_image = 0x3,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_uint32 =  0xff,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
