#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE]
    //  WDK 10
    //
    enum class flipmodel_independent_flip_stage_t : int32_t
    {                                                      
        submitted = 0x0,                                     // WDK 10
        complete =  0x1,                                     // WDK 10
    };                                                     
};
