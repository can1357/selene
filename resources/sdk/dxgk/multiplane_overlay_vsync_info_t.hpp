#pragma once
#include <sdkgen/support_library.hpp>
#include "multiplane_overlay_attributes_t.hpp"

#include "magic/multiplane_overlay_vsync_info_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_vsync_info_t                                 
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 uint32_t                                     layer_index;       //{ +0x0000    } | .LayerIndex
        _m01 int32_t                                      enabled;           //{ +0x0004    } | .Enabled
        _m02 int64_t                                      physical_address;  //{ +0x0008    } | .PhysicalAddress
        _m03 struct dxgk::multiplane_overlay_attributes_t plane_attributes;  //{ +0x0010    } | .PlaneAttributes
                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO.$", 0x0, false, 0x3474d0837a4a0604 );                 
        SDK_FIXED_SIZE( multiplane_overlay_vsync_info_t, 0x68 );                 
    };                                                                     
};
#include "magic/multiplane_overlay_vsync_info_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplane_overlay_vsync_info_t, 0x68 );
