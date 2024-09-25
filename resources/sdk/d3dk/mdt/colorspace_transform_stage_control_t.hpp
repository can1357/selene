#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [enum _D3DKMDT_COLORSPACE_TRANSFORM_STAGE_CONTROL]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class colorspace_transform_stage_control_t : int32_t
    {                                                        
        no_change = 0x0,                                       // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable =    0x1,                                       // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bypass =    0x2,                                       // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                       
};
