#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPropertyType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class property_type_t : int32_t
    {                                   
        device_property =    0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_property = 0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
