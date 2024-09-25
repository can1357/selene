#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_DEVICE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_type_t : int32_t
    {                                 
        unknown =   0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        embedded =  0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removable = 0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remote =    0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =       0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
