#pragma once
#include <sdkgen/support_library.hpp>
#include "present_stats_dwm_t.hpp"

#include "magic/devicepresent_state_dwm_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DEVICEPRESENT_STATE_DWM]
    // => WDK 10 (NV)
    //
    struct devicepresent_state_dwm_t                                
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 uint32_t                             vid_pn_source_id;   //{ +0x0000    } | .VidPnSourceId
        _m01 struct d3dk::mt::present_stats_dwm_t present_stats_dwm;  //{ +0x0008    } | .PresentStatsDWM
                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DEVICEPRESENT_STATE_DWM.$", 0x0, false, 0xf3b16a69a60f692c );                  
        SDK_FIXED_SIZE( devicepresent_state_dwm_t, 0x30 );                  
    };                                                              
};
#include "magic/devicepresent_state_dwm_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::devicepresent_state_dwm_t, 0x30 );
