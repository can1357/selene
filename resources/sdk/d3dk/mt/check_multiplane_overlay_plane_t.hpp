#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"
#include "multiplane_overlay_attributes_t.hpp"

#include "magic/check_multiplane_overlay_plane_t.start.hpp"
namespace d3dk::mt
{
    // [struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE]
    // => WDK 10 (NV)
    //
    struct check_multiplane_overlay_plane_t                                     
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 uint32_t                                         h_resource;         //{ +0x0000    } | .hResource
        _m01 struct nt::luid_t                                comp_surface_luid;  //{ +0x0004    } | .CompSurfaceLuid
        _m02 uint32_t                                         vid_pn_source_id;   //{ +0x000c    } | .VidPnSourceId
        _m03 struct d3dk::mt::multiplane_overlay_attributes_t plane_attributes;   //{ +0x0010    } | .PlaneAttributes
                                                                                
        SDK_NONVOL_PROPERTIES( "D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE.$", 0x0, false, 0xcd0c886261206ad7 );                  
        SDK_FIXED_SIZE( check_multiplane_overlay_plane_t, 0x78 );                  
    };                                                                          
};
#include "magic/check_multiplane_overlay_plane_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::check_multiplane_overlay_plane_t, 0x78 );
