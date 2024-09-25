#pragma once
#include <sdkgen/support_library.hpp>
#include "multiplane_overlay_caps_t.hpp"

#include "magic/get_multiplane_overlay_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS]
    // => WDK 10 (NV)
    //
    struct get_multiplane_overlay_caps_t                                   
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 uint32_t                                   h_adapter;           //{ +0x0000    } | .hAdapter
        _m01 uint32_t                                   vid_pn_source_id;    //{ +0x0004    } | .VidPnSourceId
        _m02 uint32_t                                   max_planes;          //{ +0x0008    } | .MaxPlanes
        _m03 uint32_t                                   max_rgb_planes;      //{ +0x000c    } | .MaxRGBPlanes
        _m04 uint32_t                                   max_yuv_planes;      //{ +0x0010    } | .MaxYUVPlanes
        _m05 struct d3dk::mt::multiplane_overlay_caps_t overlay_caps;        //{ +0x0014    } | .OverlayCaps
        _m06 float                                      max_stretch_factor;  //{ +0x0018    } | .MaxStretchFactor
        _m07 float                                      max_shrink_factor;   //{ +0x001c    } | .MaxShrinkFactor
                                                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS.$", 0x0, false, 0x59ede191add64aca );                   
        SDK_FIXED_SIZE( get_multiplane_overlay_caps_t, 0x20 );                   
    };                                                                     
};
#include "magic/get_multiplane_overlay_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::get_multiplane_overlay_caps_t, 0x20 );
