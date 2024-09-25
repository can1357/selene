#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/renderflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_RENDERFLAGS]
    // => WDK 10 (NV)
    //
    struct renderflags_t                        
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint1_t resize_command_buffer;       //{ +0x0000@0  } | .ResizeCommandBuffer
        _m01 uint1_t resize_allocation_list;      //{ +0x0000@1  } | .ResizeAllocationList
        _m02 uint1_t resize_patch_location_list;  //{ +0x0000@2  } | .ResizePatchLocationList
        _m03 uint1_t null_rendering;              //{ +0x0000@3  } | .NullRendering
        _m04 uint1_t present_redirected;          //{ +0x0000@4  } | .PresentRedirected
        _m05 uint1_t render_km;                   //{ +0x0000@5  } | .RenderKm
        _m06 uint1_t render_km_readback;          //{ +0x0000@6  } | .RenderKmReadback
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_RENDERFLAGS.$", 0x0, false, 0x557b13a5e287208e );                           
        SDK_FIXED_SIZE( renderflags_t, 0x4 );                           
    };                                          
};
#include "magic/renderflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::renderflags_t, 0x4 );
