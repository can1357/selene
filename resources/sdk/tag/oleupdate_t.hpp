#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagOLEUPDATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class oleupdate_t : int32_t
    {                               
        always = 0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        oncall = 0x3,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
