#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_device_directed_transition_state_t.start.hpp"
namespace pop
{
    // [struct _POP_FX_DEVICE_DIRECTED_TRANSITION_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_device_directed_transition_state_t
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                              
        _m00 void*   completion_context;          //{ +0x0000    +0x0000    +0x0000    } | .CompletionContext
        _m01 int32_t completion_status;           //{ +0x0008    +0x0008    +0x0008    } | .CompletionStatus
        _m02 uint1_t d_irp_pending;               //{ +0x000c@0  +0x000c@0  +0x000c@0  } | .DIrpPending
        _m03 uint1_t d_irp_completed;             //{ +0x000c@1  +0x000c@1  +0x000c@1  } | .DIrpCompleted
                                                
        SDK_MAGIC_PROPERTIES( "_POP_FX_DEVICE_DIRECTED_TRANSITION_STATE.$", 0x10, true, 0xdb1c4c57de5c0640 );                   
        SDK_FIXED_SIZE( fx_device_directed_transition_state_t, 0x10 );                   
    };                                          
};
#include "magic/fx_device_directed_transition_state_t.end.hpp"
SDK_VERIFY( struct pop::fx_device_directed_transition_state_t, 0x10 );
