#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorArgType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_arg_type_t : int32_t
    {                                  
        end =      0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _void =    0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i4 =       0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i8 =       0x3,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r4 =       0x4,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        r8 =       0x5,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ptr =      0x6,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object =   0x7,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct4 =  0x8,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct32 = 0x9,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        byvalue =  0xa,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
