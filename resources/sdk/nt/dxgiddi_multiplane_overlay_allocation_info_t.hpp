#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dxgiddi_multiplane_overlay_allocation_info_t.start.hpp"
namespace nt
{
    // [struct DXGIDDI_MULTIPLANE_OVERLAY_ALLOCATION_INFO]
    // => WDK 10 (NV)
    //
    struct dxgiddi_multiplane_overlay_allocation_info_t
    {                                                  
        // WDK 10                        
        //                               
        _m00 uint32_t present_allocation;                //{ +0x0000    } | .PresentAllocation
        _m01 uint32_t sub_resource_index;                //{ +0x0004    } | .SubResourceIndex
                                                       
        SDK_NONVOL_PROPERTIES( "DXGIDDI_MULTIPLANE_OVERLAY_ALLOCATION_INFO.$", 0x0, false, 0xb45c1d0caa2b2ea5 );                   
        SDK_FIXED_SIZE( dxgiddi_multiplane_overlay_allocation_info_t, 0x8 );                   
    };                                                 
};
#include "magic/dxgiddi_multiplane_overlay_allocation_info_t.end.hpp"
SDK_VERIFY( struct nt::dxgiddi_multiplane_overlay_allocation_info_t, 0x8 );
