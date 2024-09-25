#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"

#include "magic/miracast_display_stop_sessions_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MIRACAST_DISPLAY_STOP_SESSIONS]
    // => WDK 10 (NV)
    //
    struct miracast_display_stop_sessions_t 
    {                                       
        // WDK 10                           
        //                                  
        _m00 struct nt::luid_t adapter_luid;  //{ +0x0000    } | .AdapterLuid
        _m01 uint32_t          target_id;     //{ +0x0008    } | .TargetId
        _m02 uint32_t          stop_reason;   //{ +0x000c    } | .StopReason
                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MIRACAST_DISPLAY_STOP_SESSIONS.$", 0x0, false, 0x253a8b2a5c252919 );             
        SDK_FIXED_SIZE( miracast_display_stop_sessions_t, 0x10 );             
    };                                      
};
#include "magic/miracast_display_stop_sessions_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::miracast_display_stop_sessions_t, 0x10 );
