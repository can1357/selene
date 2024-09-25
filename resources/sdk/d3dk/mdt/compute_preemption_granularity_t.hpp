#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [enum _D3DKMDT_COMPUTE_PREEMPTION_GRANULARITY]
    //  WDK 10
    //
    enum class compute_preemption_granularity_t : int32_t
    {                                                    
        none =                  0x0,                       // WDK 10
        dma_buffer_boundary =   0x64,                      // WDK 10
        dispatch_boundary =     0xc8,                      // WDK 10
        thread_group_boundary = 0x12c,                     // WDK 10
        thread_boundary =       0x190,                     // WDK 10
        shader_boundary =       0x1f4,                     // WDK 10
    };                                                   
};
