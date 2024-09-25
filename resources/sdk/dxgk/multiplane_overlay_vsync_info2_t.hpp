#pragma once
#include <sdkgen/support_library.hpp>
#include "cb/notify_mpo_vsync_flags_t.hpp"

#include "magic/multiplane_overlay_vsync_info2_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO2]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_vsync_info2_t                        
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                                  layer_index;  //{ +0x0000    } | .LayerIndex
        _m01 uint64_t                                  present_id;   //{ +0x0008    } | .PresentId
        _m02 struct dxgk::cb::notify_mpo_vsync_flags_t flags;        //{ +0x0010    } | .Flags
                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO2.$", 0x0, false, 0x1d1f41902f3f722f );            
        SDK_FIXED_SIZE( multiplane_overlay_vsync_info2_t, 0x18 );            
    };                                                             
};
#include "magic/multiplane_overlay_vsync_info2_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplane_overlay_vsync_info2_t, 0x18 );
