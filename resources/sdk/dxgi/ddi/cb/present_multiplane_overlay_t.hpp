#pragma once
#include <sdkgen/support_library.hpp>
#include "../../../nt/dxgiddi_multiplane_overlay_allocation_info_t.hpp"

#include "magic/present_multiplane_overlay_t.start.hpp"
namespace dxgi::ddi::cb
{
    // [struct DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY]
    // => WDK 10 (NV)
    //
    struct present_multiplane_overlay_t                    
    {                                                      
        using allocation_info_t = sdk::array<struct nt::dxgiddi_multiplane_overlay_allocation_info_t, 16>;                        
                                                           
        // WDK 10                                          
        //                                                 
        _m00 void*                 p_dxgi_context;           //{ +0x0000    } | .pDXGIContext
        _m01 void*                 h_context;                //{ +0x0008    } | .hContext
        _m02 uint32_t              broadcast_context_count;  //{ +0x0010    } | .BroadcastContextCount
        _m03 sdk::array<void*, 64> broadcast_context;        //{ +0x0018    } | .BroadcastContext
        _m04 uint32_t              allocation_info_count;    //{ +0x0218    } | .AllocationInfoCount
        _m05 allocation_info_t     allocation_info;          //{ +0x021c    } | .AllocationInfo
                                                           
        SDK_NONVOL_PROPERTIES( "DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY.$", 0x0, false, 0x3916b087b66c6029 );                        
        SDK_FIXED_SIZE( present_multiplane_overlay_t, 0x2a0 );                        
    };                                                     
};
#include "magic/present_multiplane_overlay_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi::cb::present_multiplane_overlay_t, 0x2a0 );
