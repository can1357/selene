#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_GPU_PREFERENCE_QUERY_STATE]
    //  WDK 10
    //
    enum class gpu_preference_query_state_t : int32_t
    {                                                
        uninitialized =    0x0,                        // WDK 10
        high_performance = 0x1,                        // WDK 10
        minimum_power =    0x2,                        // WDK 10
        unspecified =      0x3,                        // WDK 10
        not_found =        0x4,                        // WDK 10
    };                                               
};
