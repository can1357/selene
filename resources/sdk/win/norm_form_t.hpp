#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _NORM_FORM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class norm_form_t : int32_t
    {                               
        other = 0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        c =     0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d =     0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kc =    0x5,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kd =    0x6,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
