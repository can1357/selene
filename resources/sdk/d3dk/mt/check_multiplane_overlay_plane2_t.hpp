#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"
#include "multiplane_overlay_attributes2_t.hpp"

#include "magic/check_multiplane_overlay_plane2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2]
    // => WDK 10 (NV)
    //
    struct check_multiplane_overlay_plane2_t       
    {                                              
        using plane_attributes_t = struct d3dk::mt::multiplane_overlay_attributes2_t;                  
                                                   
        // WDK 10                                  
        //                                         
        _m00 uint32_t            layer_index;        //{ +0x0000    } | .LayerIndex
        _m01 uint32_t            h_resource;         //{ +0x0004    } | .hResource
        _m02 struct nt::luid_t   comp_surface_luid;  //{ +0x0008    } | .CompSurfaceLuid
        _m03 uint32_t            vid_pn_source_id;   //{ +0x0010    } | .VidPnSourceId
        _m04 plane_attributes_t  plane_attributes;   //{ +0x0018    } | .PlaneAttributes
                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2.$", 0x0, false, 0x964a435c328d1269 );                  
        SDK_FIXED_SIZE( check_multiplane_overlay_plane2_t, 0x80 );                  
    };                                             
};
#include "magic/check_multiplane_overlay_plane2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::check_multiplane_overlay_plane2_t, 0x80 );
