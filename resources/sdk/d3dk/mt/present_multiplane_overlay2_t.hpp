#pragma once
#include <sdkgen/support_library.hpp>
#include "presentflags_t.hpp"
#include "../../d3d/ddi/flipinterval_type_t.hpp"

#include "magic/present_multiplane_overlay2_t.start.hpp"
namespace d3dk::mt
{
    struct multiplane_overlay2_t;

    // [struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2]
    // => WDK 10 (NV)
    //
    struct present_multiplane_overlay2_t                                     
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 uint32_t                                h_adapter;                //{ +0x0000    } | .hAdapter
        _m01 uint32_t                                h_device;                 //{ +0x0004    } | .hDevice
        _m02 uint32_t                                h_context;                //{ +0x0004    } | .hContext
        _m03 uint32_t                                broadcast_context_count;  //{ +0x0008    } | .BroadcastContextCount
        _m04 sdk::array<uint32_t, 64>                broadcast_context;        //{ +0x000c    } | .BroadcastContext
        _m05 uint32_t                                vid_pn_source_id;         //{ +0x010c    } | .VidPnSourceId
        _m06 uint32_t                                present_count;            //{ +0x0110    } | .PresentCount
        _m07 enum d3d::ddi::flipinterval_type_t      flip_interval;            //{ +0x0114    } | .FlipInterval
        _m08 struct d3dk::mt::presentflags_t         flags;                    //{ +0x0118    } | .Flags
        _m09 uint32_t                                present_plane_count;      //{ +0x011c    } | .PresentPlaneCount
        _m10 struct d3dk::mt::multiplane_overlay2_t* p_present_planes;         //{ +0x0120    } | .pPresentPlanes
        _m11 uint32_t                                duration;                 //{ +0x0128    } | .Duration
                                                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.$", 0x0, false, 0x59567c8fd6a22ad );                        
        SDK_FIXED_SIZE( present_multiplane_overlay2_t, 0x130 );                        
    };                                                                       
};
#include "magic/present_multiplane_overlay2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::present_multiplane_overlay2_t, 0x130 );
