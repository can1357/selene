#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_multiplane_overlay_group_caps_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS]
    // => WDK 10 (NV)
    //
    struct ddi_multiplane_overlay_group_caps_t
    {                                         
        // WDK 10                        
        //                               
        _m00 uint32_t num_planes;               //{ +0x0000    } | .NumPlanes
        _m01 float    max_stretch_factor;       //{ +0x0004    } | .MaxStretchFactor
        _m02 float    max_shrink_factor;        //{ +0x0008    } | .MaxShrinkFactor
        _m03 uint32_t overlay_caps;             //{ +0x000c    } | .OverlayCaps
        _m04 uint32_t stereo_caps;              //{ +0x0010    } | .StereoCaps
                                              
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS.$", 0x0, false, 0x237486aa63f6ece1 );                   
        SDK_FIXED_SIZE( ddi_multiplane_overlay_group_caps_t, 0x14 );                   
    };                                        
};
#include "magic/ddi_multiplane_overlay_group_caps_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_multiplane_overlay_group_caps_t, 0x14 );
