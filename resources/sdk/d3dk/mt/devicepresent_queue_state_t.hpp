#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/devicepresent_queue_state_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DEVICEPRESENT_QUEUE_STATE]
    // => WDK 10 (NV)
    //
    struct devicepresent_queue_state_t               
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint32_t vid_pn_source_id;                //{ +0x0000    } | .VidPnSourceId
        _m01 uint8_t  b_queued_present_limit_reached;  //{ +0x0004    } | .bQueuedPresentLimitReached
                                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DEVICEPRESENT_QUEUE_STATE.$", 0x0, false, 0xf2ab5ce3f5ac4ad8 );                               
        SDK_FIXED_SIZE( devicepresent_queue_state_t, 0x8 );                               
    };                                               
};
#include "magic/devicepresent_queue_state_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::devicepresent_queue_state_t, 0x8 );
