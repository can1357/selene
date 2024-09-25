#pragma once
#include <sdkgen/support_library.hpp>
#include "multiplane_overlay_attributes_t.hpp"

#include "magic/check_multiplane_overlay_support_plane_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE]
    // => WDK 10 (NV)
    //
    struct check_multiplane_overlay_support_plane_t                        
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 void*                                        h_allocation;      //{ +0x0000    } | .hAllocation
        _m01 uint32_t                                     vid_pn_source_id;  //{ +0x0008    } | .VidPnSourceId
        _m02 struct dxgk::multiplane_overlay_attributes_t plane_attributes;  //{ +0x000c    } | .PlaneAttributes
                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE.$", 0x0, false, 0x60d8b30e127a5c15 );                 
        SDK_FIXED_SIZE( check_multiplane_overlay_support_plane_t, 0x68 );                 
    };                                                                     
};
#include "magic/check_multiplane_overlay_support_plane_t.end.hpp"
SDK_VERIFY( struct dxgk::check_multiplane_overlay_support_plane_t, 0x68 );
