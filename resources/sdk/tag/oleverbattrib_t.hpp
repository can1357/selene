#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagOLEVERBATTRIB]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class oleverbattrib_t : int32_t
    {                                   
        neverdirties =    0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        oncontainermenu = 0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};