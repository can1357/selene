#pragma once
#include <sdkgen/support_library.hpp>
#include "multiplane_overlay_attributes2_t.hpp"

#include "magic/multiplane_overlay_plane_with_source_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_plane_with_source_t                           
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 void*                                         h_allocation;      //{ +0x0000    } | .hAllocation
        _m01 uint32_t                                      vid_pn_source_id;  //{ +0x0008    } | .VidPnSourceId
        _m02 uint32_t                                      layer_index;       //{ +0x000c    } | .LayerIndex
        _m03 struct dxgk::multiplane_overlay_attributes2_t plane_attributes;  //{ +0x0010    } | .PlaneAttributes
                                                                            
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE.$", 0x0, false, 0xb3c6306c482d9b05 );                 
        SDK_FIXED_SIZE( multiplane_overlay_plane_with_source_t, 0x70 );                 
    };                                                                      
};
#include "magic/multiplane_overlay_plane_with_source_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplane_overlay_plane_with_source_t, 0x70 );
