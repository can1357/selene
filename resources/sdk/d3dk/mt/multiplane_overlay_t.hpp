#pragma once
#include <sdkgen/support_library.hpp>
#include "multiplane_overlay_attributes_t.hpp"

#include "magic/multiplane_overlay_t.start.hpp"
namespace d3dk::mt
{
    // [struct D3DKMT_MULTIPLANE_OVERLAY]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_t                                                
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 uint32_t                                         layer_index;       //{ +0x0000    } | .LayerIndex
        _m01 int32_t                                          enabled;           //{ +0x0004    } | .Enabled
        _m02 uint32_t                                         h_allocation;      //{ +0x0008    } | .hAllocation
        _m03 struct d3dk::mt::multiplane_overlay_attributes_t plane_attributes;  //{ +0x0010    } | .PlaneAttributes
                                                                               
        SDK_NONVOL_PROPERTIES( "D3DKMT_MULTIPLANE_OVERLAY.$", 0x0, false, 0xb49125a83684313e );                 
        SDK_FIXED_SIZE( multiplane_overlay_t, 0x78 );                          
    };                                                                         
};
#include "magic/multiplane_overlay_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::multiplane_overlay_t, 0x78 );
