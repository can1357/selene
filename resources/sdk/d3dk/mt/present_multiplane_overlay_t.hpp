#pragma once
#include <sdkgen/support_library.hpp>
#include "presentflags_t.hpp"
#include "../../d3d/ddi/flipinterval_type_t.hpp"

#include "magic/present_multiplane_overlay_t.start.hpp"
namespace d3dk::mt
{
    struct multiplane_overlay_t;

    // [struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY]
    // => WDK 10 (NV)
    //
    struct present_multiplane_overlay_t                                     
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                               h_device;                 //{ +0x0000    } | .hDevice
        _m01 uint32_t                               h_context;                //{ +0x0000    } | .hContext
        _m02 uint32_t                               broadcast_context_count;  //{ +0x0004    } | .BroadcastContextCount
        _m03 sdk::array<uint32_t, 64>               broadcast_context;        //{ +0x0008    } | .BroadcastContext
        _m04 uint32_t                               vid_pn_source_id;         //{ +0x0108    } | .VidPnSourceId
        _m05 uint32_t                               present_count;            //{ +0x010c    } | .PresentCount
        _m06 enum d3d::ddi::flipinterval_type_t     flip_interval;            //{ +0x0110    } | .FlipInterval
        _m07 struct d3dk::mt::presentflags_t        flags;                    //{ +0x0114    } | .Flags
        _m08 uint32_t                               present_plane_count;      //{ +0x0118    } | .PresentPlaneCount
        _m09 struct d3dk::mt::multiplane_overlay_t* p_present_planes;         //{ +0x0120    } | .pPresentPlanes
        _m10 uint32_t                               duration;                 //{ +0x0128    } | .Duration
                                                                            
        SDK_NONVOL_PROPERTIES( "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.$", 0x0, false, 0xfd37ef9d5056aabf );                        
        SDK_FIXED_SIZE( present_multiplane_overlay_t, 0x130 );                        
    };                                                                      
};
#include "magic/present_multiplane_overlay_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::present_multiplane_overlay_t, 0x130 );
