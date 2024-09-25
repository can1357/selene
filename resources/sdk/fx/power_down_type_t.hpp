#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPowerDownType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_down_type_t : int32_t
    {                                     
        _explicit = 0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        implicit =  0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
