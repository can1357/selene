#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_PNP_KEY_TYPE]
    //  WDK 10
    //
    enum class pnp_key_type_t : int32_t
    {                                  
        hardware = 0x1,                  // WDK 10
        software = 0x2,                  // WDK 10
    };                                 
};
