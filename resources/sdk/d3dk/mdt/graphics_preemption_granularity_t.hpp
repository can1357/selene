#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [enum _D3DKMDT_GRAPHICS_PREEMPTION_GRANULARITY]
    //  WDK 10
    //
    enum class graphics_preemption_granularity_t : int32_t
    {                                                     
        none =                0x0,                          // WDK 10
        dma_buffer_boundary = 0x64,                         // WDK 10
        primitive_boundary =  0xc8,                         // WDK 10
        triangle_boundary =   0x12c,                        // WDK 10
        pixel_boundary =      0x190,                        // WDK 10
        shader_boundary =     0x1f4,                        // WDK 10
    };                                                    
};
