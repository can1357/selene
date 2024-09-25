#pragma once
#include <sdkgen/support_library.hpp>
#include "multiplane_overlay_attributes2_t.hpp"

#include "magic/multiplane_overlay2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MULTIPLANE_OVERLAY2]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay2_t                  
    {                                             
        using plane_attributes_t = struct d3dk::mt::multiplane_overlay_attributes2_t;                 
                                                  
        // WDK 10                                 
        //                                        
        _m00 uint32_t            layer_index;       //{ +0x0000    } | .LayerIndex
        _m01 int32_t             enabled;           //{ +0x0004    } | .Enabled
        _m02 uint32_t            h_allocation;      //{ +0x0008    } | .hAllocation
        _m03 plane_attributes_t  plane_attributes;  //{ +0x0010    } | .PlaneAttributes
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MULTIPLANE_OVERLAY2.$", 0x0, false, 0xb069eecd76ad8ce6 );                 
        SDK_FIXED_SIZE( multiplane_overlay2_t, 0x78 );                 
    };                                            
};
#include "magic/multiplane_overlay2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::multiplane_overlay2_t, 0x78 );
