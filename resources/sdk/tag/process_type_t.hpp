#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagProcessType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class process_type_t : int32_t
    {                                  
        normal =           0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        service =          0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_plus =         0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        legacy_surrogate = 0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        com_plus_service = 0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
