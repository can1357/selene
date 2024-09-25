#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct dxgiddi_multiplane_overlay_plane_info_t; }

#include "magic/present_multiplane_overlay1_t.start.hpp"
namespace dxgi::ddi::cb
{
    // [struct DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1]
    // => WDK 10 (NV)
    //
    struct present_multiplane_overlay1_t              
    {                                                 
        using pp_present_planes_t = struct nt::dxgiddi_multiplane_overlay_plane_info_t**;                    
                                                      
        // WDK 10                                     
        //                                            
        _m00 void*                p_dxgi_context;       //{ +0x0000    } | .pDXGIContext
        _m01 uint32_t             present_plane_count;  //{ +0x0008    } | .PresentPlaneCount
        _m02 pp_present_planes_t  pp_present_planes;    //{ +0x0010    } | .ppPresentPlanes
                                                      
        SDK_NONVOL_PROPERTIES( "DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1.$", 0x0, false, 0x3f43335291543ef5 );                    
        SDK_FIXED_SIZE( present_multiplane_overlay1_t, 0x18 );                    
    };                                                
};
#include "magic/present_multiplane_overlay1_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi::cb::present_multiplane_overlay1_t, 0x18 );
