#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_CRTC_VSYNC_STATE]
    //  WDK 10
    //
    enum class crtc_vsync_state_t : int32_t
    {                                      
        enable =             0x0,            // WDK 10
        disable_keep_phase = 0x1,            // WDK 10
        disable_no_phase =   0x2,            // WDK 10
    };                                     
};
