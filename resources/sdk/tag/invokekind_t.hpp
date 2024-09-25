#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagINVOKEKIND]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class invokekind_t : int32_t
    {                                
        func =           0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        propertyget =    0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        propertyput =    0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        propertyputref = 0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
