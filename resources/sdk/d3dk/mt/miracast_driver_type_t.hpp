#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_MIRACAST_DRIVER_TYPE]
    //  WDK 10
    //
    enum class miracast_driver_type_t : int32_t
    {                                          
        not_supported = 0x0,                     // WDK 10
        ihv =           0x1,                     // WDK 10
        ms =            0x2,                     // WDK 10
    };                                         
};
