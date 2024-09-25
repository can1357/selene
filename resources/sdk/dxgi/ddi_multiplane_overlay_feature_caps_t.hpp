#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_MULTIPLANE_OVERLAY_FEATURE_CAPS]
    //  WDK 10
    //
    enum class ddi_multiplane_overlay_feature_caps_t : int32_t
    {                                                         
        caps_rotation_without_independent_flip = 0x1,           // WDK 10
        caps_vertical_flip =                     0x2,           // WDK 10
        caps_horizontal_flip =                   0x4,           // WDK 10
        caps_deinterlace =                       0x8,           // WDK 10
        caps_stereo =                            0x10,          // WDK 10
        caps_rgb =                               0x20,          // WDK 10
        caps_yuv =                               0x40,          // WDK 10
        caps_bilinear_filter =                   0x80,          // WDK 10
        caps_high_filter =                       0x100,         // WDK 10
        caps_rotation =                          0x200,         // WDK 10
        caps_fullscreen_post_composition =       0x400,         // WDK 10
        reserved1 =                              0x800,         // WDK 10
        caps_shared =                            0x1000,        // WDK 10
        caps_immediate =                         0x2000,        // WDK 10
        caps_plane0_for_virtual_mode_only =      0x4000,        // WDK 10
    };                                                        
};
