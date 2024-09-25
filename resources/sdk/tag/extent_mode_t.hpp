#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagExtentMode]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class extent_mode_t : int32_t
    {                                 
        content =  0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        integral = 0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
