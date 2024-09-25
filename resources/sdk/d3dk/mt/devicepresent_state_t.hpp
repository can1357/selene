#pragma once
#include <sdkgen/support_library.hpp>
#include "present_stats_t.hpp"

#include "magic/devicepresent_state_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DEVICEPRESENT_STATE]
    // => WDK 10 (NV)
    //
    struct devicepresent_state_t                               
    {                                                          
        // WDK 10                                              
        //                                                     
        _m00 uint32_t                         vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 struct d3dk::mt::present_stats_t present_stats;     //{ +0x0008    } | .PresentStats
                                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DEVICEPRESENT_STATE.$", 0x0, false, 0x77cfd1aebe6ba6bf );                 
        SDK_FIXED_SIZE( devicepresent_state_t, 0x28 );                 
    };                                                         
};
#include "magic/devicepresent_state_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::devicepresent_state_t, 0x28 );
