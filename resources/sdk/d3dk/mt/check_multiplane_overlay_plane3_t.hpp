#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"

#include "magic/check_multiplane_overlay_plane3_t.start.hpp"
namespace d3dk::mt
{
    struct multiplane_overlay_attributes3_t;

    // [struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3]
    // => WDK 10 (NV)
    //
    struct check_multiplane_overlay_plane3_t          
    {                                                 
        using p_plane_attributes_t = struct d3dk::mt::multiplane_overlay_attributes3_t*;                   
                                                      
        // WDK 10                                     
        //                                            
        _m00 uint32_t              layer_index;         //{ +0x0000    } | .LayerIndex
        _m01 uint32_t              h_resource;          //{ +0x0004    } | .hResource
        _m02 struct nt::luid_t     comp_surface_luid;   //{ +0x0008    } | .CompSurfaceLuid
        _m03 uint32_t              vid_pn_source_id;    //{ +0x0010    } | .VidPnSourceId
        _m04 p_plane_attributes_t  p_plane_attributes;  //{ +0x0018    } | .pPlaneAttributes
                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3.$", 0x0, false, 0x1b97900c9e55d7a7 );                   
        SDK_FIXED_SIZE( check_multiplane_overlay_plane3_t, 0x20 );                   
    };                                                
};
#include "magic/check_multiplane_overlay_plane3_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::check_multiplane_overlay_plane3_t, 0x20 );
