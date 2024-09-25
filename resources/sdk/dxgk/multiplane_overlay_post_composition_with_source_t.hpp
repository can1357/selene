#pragma once
#include <sdkgen/support_library.hpp>
#include "multiplane_overlay_post_composition_t.hpp"

#include "magic/multiplane_overlay_post_composition_with_source_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_post_composition_with_source_t
    {                                                       
        using post_composition_t = struct dxgk::multiplane_overlay_post_composition_t;                 
                                                            
        // WDK 10                                 
        //                                        
        _m00 uint32_t            vid_pn_source_id;            //{ +0x0000    } | .VidPnSourceId
        _m01 post_composition_t  post_composition;            //{ +0x0004    } | .PostComposition
                                                            
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE.$", 0x0, false, 0x18ba1cfe92f3aff8 );                 
        SDK_FIXED_SIZE( multiplane_overlay_post_composition_with_source_t, 0x2c );                 
    };                                                      
};
#include "magic/multiplane_overlay_post_composition_with_source_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplane_overlay_post_composition_with_source_t, 0x2c );
