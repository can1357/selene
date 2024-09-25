#pragma once
#include <sdkgen/support_library.hpp>
#include "../interrupt_type_t.hpp"
#include "../interrupt_state_t.hpp"
#include "../crtc_vsync_state_t.hpp"

#include "magic/controlinterrupt2_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CONTROLINTERRUPT2]
    // => WDK 10 (NV)
    //
    struct controlinterrupt2_t                              
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 enum dxgk::interrupt_type_t   interrupt_type;    //{ +0x0000    } | .InterruptType
        _m01 enum dxgk::interrupt_state_t  interrupt_state;   //{ +0x0004    } | .InterruptState
        _m02 enum dxgk::crtc_vsync_state_t crtc_vsync_state;  //{ +0x0004    } | .CrtcVsyncState
                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CONTROLINTERRUPT2.$", 0x0, false, 0x9821e7d07234f0a1 );                 
        SDK_FIXED_SIZE( controlinterrupt2_t, 0x8 );                 
    };                                                      
};
#include "magic/controlinterrupt2_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::controlinterrupt2_t, 0x8 );
