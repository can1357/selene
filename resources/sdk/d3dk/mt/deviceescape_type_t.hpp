#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_DEVICEESCAPE_TYPE]
    //  WDK 10
    //
    enum class deviceescape_type_t : int32_t
    {                                       
        vidpnfromallocation = 0x0,            // WDK 10
        restoregamma =        0x1,            // WDK 10
    };                                      
};
