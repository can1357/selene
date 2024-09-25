#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/dxgi_rgb_t.hpp"

#include "magic/adjustfullscreengamma_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ADJUSTFULLSCREENGAMMA]
    // => WDK 10 (NV)
    //
    struct adjustfullscreengamma_t                        
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint32_t                    h_adapter;         //{ +0x0000    } | .hAdapter
        _m01 uint32_t                    vid_pn_source_id;  //{ +0x0004    } | .VidPnSourceId
        _m02 struct d3d::ddi::dxgi_rgb_t scale;             //{ +0x0008    } | .Scale
        _m03 struct d3d::ddi::dxgi_rgb_t offset;            //{ +0x0014    } | .Offset
                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ADJUSTFULLSCREENGAMMA.$", 0x0, false, 0x4159adfea21da09e );                 
        SDK_FIXED_SIZE( adjustfullscreengamma_t, 0x20 );                 
    };                                                    
};
#include "magic/adjustfullscreengamma_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::adjustfullscreengamma_t, 0x20 );
