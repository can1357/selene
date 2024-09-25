#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _COLORSPACE_TRANSFORM_STAGE_CONTROL]
    //  WDK 10
    //
    enum class colorspace_transform_stage_control_t : int32_t
    {                                                        
        no_change = 0x0,                                       // WDK 10
        enable =    0x1,                                       // WDK 10
        bypass =    0x2,                                       // WDK 10
    };                                                       
};
