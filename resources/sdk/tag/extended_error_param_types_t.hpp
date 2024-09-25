#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagExtendedErrorParamTypes]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class extended_error_param_types_t : int32_t
    {                                                
        ansi_string =    0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unicode_string = 0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        long_val =       0x3,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        short_val =      0x4,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pointer_val =    0x5,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        none =           0x6,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary =         0x7,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
