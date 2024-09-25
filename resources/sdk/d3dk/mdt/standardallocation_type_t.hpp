#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [enum _D3DKMDT_STANDARDALLOCATION_TYPE]
    //  WDK 10
    //
    enum class standardallocation_type_t : int32_t
    {                                             
        sharedprimarysurface = 0x1,                 // WDK 10
        shadowsurface =        0x2,                 // WDK 10
        stagingsurface =       0x3,                 // WDK 10
        gdisurface =           0x4,                 // WDK 10
        vgpu =                 0x5,                 // WDK 10
    };                                            
};
