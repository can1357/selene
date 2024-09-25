#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_MULTIPLANE_OVERLAY_FLAGS]
    //  WDK 10
    //
    enum class ddi_multiplane_overlay_flags_t : int32_t
    {                                                  
        vertical_flip =               0x1,               // WDK 10
        horizontal_flip =             0x2,               // WDK 10
        fullscreen_post_composition = 0x4,               // WDK 10
        no_scanout_tranformation =    0x8,               // WDK 10
    };                                                 
};
