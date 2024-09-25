#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagSF_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sf_type_t : int32_t
    {                             
        i2 =       0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i4 =       0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bstr =     0x8,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatch = 0x9,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =    0xa,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        variant =  0xc,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown =  0xd,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i1 =       0x10,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i8 =       0x14,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        record =   0x24,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        haveiid =  0x800d,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
