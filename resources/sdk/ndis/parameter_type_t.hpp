#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PARAMETER_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class parameter_type_t : int32_t
    {                                    
        integer =      0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hex_integer =  0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        string =       0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        multi_string = 0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binary =       0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
