#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_multiplane_overlay_caps_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_MULTIPLANE_OVERLAY_CAPS]
    // => WDK 10 (NV)
    //
    struct ddi_multiplane_overlay_caps_t    
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint32_t max_planes;             //{ +0x0000    } | .MaxPlanes
        _m01 uint32_t num_capability_groups;  //{ +0x0004    } | .NumCapabilityGroups
                                            
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_MULTIPLANE_OVERLAY_CAPS.$", 0x0, false, 0xabc7bf266a3afe9f );                      
        SDK_FIXED_SIZE( ddi_multiplane_overlay_caps_t, 0x8 );                      
    };                                      
};
#include "magic/ddi_multiplane_overlay_caps_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_multiplane_overlay_caps_t, 0x8 );
