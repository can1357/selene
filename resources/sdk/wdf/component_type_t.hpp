#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum WdfComponentType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class component_type_t : int32_t
    {                                    
        invalid =        0x0,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        platform =       0x1,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reflector =      0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_manager = 0x3,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        host =           0x4,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        framework =      0x5,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        test =           0x6,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0x7,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
