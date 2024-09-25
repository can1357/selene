#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS]
    //  WDK 10
    //
    enum class opm_video_output_semantics_t : int32_t
    {                                                
        copp_semantics =       0x0,                    // WDK 10
        opm_semantics =        0x1,                    // WDK 10
        opm_indirect_display = 0x2,                    // WDK 10
    };                                               
};
