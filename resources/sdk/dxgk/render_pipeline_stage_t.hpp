#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_RENDER_PIPELINE_STAGE]
    //  WDK 10
    //
    enum class render_pipeline_stage_t : int32_t
    {                                           
        unknown =         0x0,                    // WDK 10
        input_assembler = 0x1,                    // WDK 10
        vertex_shader =   0x2,                    // WDK 10
        geometry_shader = 0x3,                    // WDK 10
        stream_output =   0x4,                    // WDK 10
        rasterizer =      0x5,                    // WDK 10
        pixel_shader =    0x6,                    // WDK 10
        output_merger =   0x7,                    // WDK 10
    };                                          
};
