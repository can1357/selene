#pragma once
#include <sdkgen/support_library.hpp>
#include "../interrupt_type_t.hpp"
#include "../interrupt_state_t.hpp"
#include "../crtc_vsync_state_t.hpp"

#include "magic/controlinterrupt3_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CONTROLINTERRUPT3]
    // => WDK 10 (NV)
    //
    struct controlinterrupt3_t                              
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 enum dxgk::interrupt_type_t   interrupt_type;    //{ +0x0000    } | .InterruptType
        _m01 enum dxgk::interrupt_state_t  interrupt_state;   //{ +0x0004    } | .InterruptState
        _m02 enum dxgk::crtc_vsync_state_t crtc_vsync_state;  //{ +0x0004    } | .CrtcVsyncState
        _m03 uint32_t                      vid_pn_source_id;  //{ +0x0008    } | .VidPnSourceId
                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CONTROLINTERRUPT3.$", 0x0, false, 0x4e0c41663a9aeb62 );                 
        SDK_FIXED_SIZE( controlinterrupt3_t, 0xc );                 
    };                                                      
};
#include "magic/controlinterrupt3_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::controlinterrupt3_t, 0xc );
