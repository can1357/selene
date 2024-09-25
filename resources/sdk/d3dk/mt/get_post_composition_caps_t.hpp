#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_post_composition_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GET_POST_COMPOSITION_CAPS]
    // => WDK 10 (NV)
    //
    struct get_post_composition_caps_t   
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t h_adapter;           //{ +0x0000    } | .hAdapter
        _m01 uint32_t vid_pn_source_id;    //{ +0x0004    } | .VidPnSourceId
        _m02 float    max_stretch_factor;  //{ +0x0008    } | .MaxStretchFactor
        _m03 float    max_shrink_factor;   //{ +0x000c    } | .MaxShrinkFactor
                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GET_POST_COMPOSITION_CAPS.$", 0x0, false, 0xbaf7c7e24bb2a50e );                   
        SDK_FIXED_SIZE( get_post_composition_caps_t, 0x10 );                   
    };                                   
};
#include "magic/get_post_composition_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::get_post_composition_caps_t, 0x10 );
